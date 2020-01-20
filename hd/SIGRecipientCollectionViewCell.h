//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIGCollectionViewCell.h"

#import "SCActionHandlingDelegate.h"
#import "SCActionable.h"
#import "SCViewModelConfigurable.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCLazy;

@interface SIGRecipientCollectionViewCell : SIGCollectionViewCell <UIGestureRecognizerDelegate, SCActionHandlingDelegate, SCViewModelConfigurable, SCActionable>
{
    SCLazy *_longPressGesture;
    SCLazy *_singleTapGesture;
    id <SIGAccessoryViewProviding> _leadingAccessoryViewProvider;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (struct SIGContainerStyle)containerStyleForCellViewModel:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)_longPressGestureRecognizer;
- (id)_singleTapGestureRecognizer;
- (void)_didSingleTap:(id)arg1;
- (void)_didLongPress:(id)arg1;
- (_Bool)handleActionWithActionModel:(id)arg1 fromSourceView:(id)arg2;
- (void)_updateEmojiWithViewModel:(id)arg1;
- (void)_updateBasicWithViewModel:(id)arg1;
- (void)_updateAvatarWithViewModel:(id)arg1;
- (void)_updateActionIndicatorWithViewModel:(id)arg1;
- (void)_updateTrailingAccessoryWithViewModel:(id)arg1;
- (void)_updateMiddleAccessoryWithViewModel:(id)arg1;
- (void)_updateLeadingAccessoryWithViewModel:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

