//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCComposerViewOwner.h"
#import "SCSizeChangeAnnouncingView.h"

@class NSString, SCContextV2ActionsHandler, SCContextV2Session, SCContextV2ViewModel;

@interface SCContextV2CardsView : UIView <SCComposerViewOwner, SCSizeChangeAnnouncingView>
{
    SCContextV2Session *_contextSession;
    long long _style;
    SCContextV2ViewModel *_cardsContent;
    UIView *_contentViewPendingFirstRender;
    double _temporaryHeightPendingFirstRender;
    CDUnknownBlockType _onSizeChangedBlock;
    SCContextV2ActionsHandler *_actionsHandler;
    UIView *_contentView;
}

+ (id)defaultPlaceholderCards;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) SCContextV2ActionsHandler *actionsHandler; // @synthesize actionsHandler=_actionsHandler;
@property(copy, nonatomic) CDUnknownBlockType onSizeChangedBlock; // @synthesize onSizeChangedBlock=_onSizeChangedBlock;
- (void).cxx_destruct;
- (id)composerWillCreateViewForClass:(Class)arg1 nodeId:(id)arg2;
- (void)didRenderComposerView:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_sizeChanged;
- (void)_applyStyleClassesToView:(id)arg1;
- (void)showErrorStateWithRetryBlock:(CDUnknownBlockType)arg1;
- (id)cardsContent;
- (void)showCardsContent:(id)arg1;
- (void)setPlaceholderCards:(id)arg1 collapsed:(_Bool)arg2;
- (id)initWithSession:(id)arg1 actionsHandler:(id)arg2 style:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
