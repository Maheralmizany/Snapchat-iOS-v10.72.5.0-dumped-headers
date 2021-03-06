//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SCActionHandlingDelegate.h"
#import "SCActionable.h"
#import "SCRoundedCornerConfigurable.h"
#import "SCViewModelConfigurable.h"

@class NSString, SCLazy, SCSnapchatterVerticalView, UILongPressGestureRecognizer;

@interface SCSnapchatterCarouselCollectionViewCell : UICollectionViewCell <SCActionHandlingDelegate, SCViewModelConfigurable, SCActionable, SCRoundedCornerConfigurable>
{
    SCLazy *_backgroundShapeView;
    SCSnapchatterVerticalView *_snapchatterView;
    struct CGRect _shapeLayerPathRect;
    UILongPressGestureRecognizer *_longPressGesture;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
    unsigned long long _roundedCorners;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_updateBackgroundShapViewPath;
- (void)_setShapeLayerPathRect:(struct CGRect)arg1;
- (void)_didLongPress:(id)arg1;
- (void)setImageDownloader:(id)arg1;
- (_Bool)handleActionWithActionModel:(id)arg1 fromSourceView:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

