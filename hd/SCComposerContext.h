//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCComposerActionHandlerProvider.h"

@class NSMutableArray, NSString, SCComposerActions, SCComposerViewLoader, UIView;

@interface SCComposerContext : NSObject <SCComposerActionHandlerProvider>
{
    SmallShared_994bf1d5 _shadowNodeTree;
    _Bool _awakeCalled;
    long long _renderCount;
    NSString *_bundleName;
    NSString *_dirname;
    NSMutableArray *_initialRenderCompletions;
    id _viewModel;
    id _actionHandler;
    id _owner;
    SCComposerActions *_actions;
}

@property(readonly, nonatomic) SmallShared_994bf1d5 shadowNodeTree; // @synthesize shadowNodeTree=_shadowNodeTree;
@property(retain, nonatomic) SCComposerActions *actions; // @synthesize actions=_actions;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
@property(nonatomic) __weak id actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionHandlerForSelectorNamed:(id)arg1;
- (void)waitUntilInitialRenderWithCompletion:(CDUnknownBlockType)arg1;
- (void)setViewModelNoUpdate:(id)arg1;
@property(readonly, nonatomic) SCComposerViewLoader *viewLoader;
- (void)didChangeValue:(id)arg1 forInternedComposerAttribute:(struct SCComposerInternedString *)arg2 inViewNode:(id)arg3;
- (void)didChangeValue:(id)arg1 forComposerAttribute:(id)arg2 inViewNode:(id)arg3;
@property(readonly, nonatomic) id nearestAncestorOwner;
- (void)calculateLayoutWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *dirname;
@property(readonly, nonatomic) NSString *bundleName;
@property(readonly, nonatomic) unsigned int objectID;
- (id)viewForNodeId:(id)arg1;
- (id)detachRootView;
@property(readonly, nonatomic) UIView *rootView;
- (struct View)_rootComposerView;
@property(readonly, nonatomic) SCComposerContext *rootContext;
@property(readonly, nonatomic) SCComposerContext *parentContext;
@property(readonly, nonatomic) _Bool hasCompletedInitialRenderIncludingChildComponents;
- (_Bool)hasCompletedInitialRender;
- (void)notifyDidRender;
- (void)awakeIfNeeded;
- (void)destroy;
- (void)render;
- (const SmallShared_19b5df4a *)cppViewLoader;
- (id)initWithShadowNodeTree:(SmallShared_994bf1d5)arg1 actions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
