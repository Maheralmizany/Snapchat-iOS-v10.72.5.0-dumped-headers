//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCComposerViewComponent.h"

@class NSString;

@interface SCComposerView : UIView <SCComposerViewComponent>
{
    _Bool _raisedWarning;
    _Bool _ownsContext;
    id <SCComposerViewOwner> _owner;
}

@property(readonly, nonatomic) _Bool ownsContext; // @synthesize ownsContext=_ownsContext;
@property(nonatomic) __weak id <SCComposerViewOwner> owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)waitUntilInitialRenderWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canUseMeasurePlaceholderView;
- (void)didMoveToComposerContext:(id)arg1 viewNode:(id)arg2 ownsContext:(_Bool)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)dealloc;
@property(readonly, nonatomic) NSString *componentPath;
@property(readonly, nonatomic) NSString *viewName;
@property(readonly, nonatomic) NSString *bundleName;
- (_Bool)willEnqueueIntoComposerPool;
- (id)initWithViewModelUntyped:(id)arg1 componentContextUntyped:(id)arg2;
- (id)initWithViewModelUntyped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithOwner:(id)arg1 viewModel:(id)arg2 componentContext:(id)arg3 allowSelfInflate:(_Bool)arg4;
- (id)initWithOwner:(id)arg1 viewModel:(id)arg2 allowSelfInflate:(_Bool)arg3;
- (id)initWithOwner:(id)arg1 allowSelfInflate:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
