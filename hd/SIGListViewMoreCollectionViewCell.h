//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIGCollectionViewCell.h"

#import "SCSectionKitCollectionViewViewMoreActionable.h"
#import "SCViewModelConfigurable.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString;

@interface SIGListViewMoreCollectionViewCell : SIGCollectionViewCell <UIGestureRecognizerDelegate, SCViewModelConfigurable, SCSectionKitCollectionViewViewMoreActionable>
{
    id _viewModel;
    id <SCSectionKitCollectionViewViewMoreActionableDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (struct SIGContainerStyle)containerStyle;
@property(nonatomic) __weak id <SCSectionKitCollectionViewViewMoreActionableDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_didSingleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

