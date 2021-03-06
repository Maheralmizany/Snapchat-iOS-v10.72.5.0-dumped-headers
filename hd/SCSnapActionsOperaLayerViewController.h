//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

@class SCSnapActionsServices, UIViewController;

@interface SCSnapActionsOperaLayerViewController : SCOperaLayerViewController
{
    _Bool _hidden;
    UIViewController *_snapActionsViewController;
    SCSnapActionsServices *_snapActionsServices;
}

@property(readonly, nonatomic) __weak SCSnapActionsServices *snapActionsServices; // @synthesize snapActionsServices=_snapActionsServices;
@property(retain, nonatomic) UIViewController *snapActionsViewController; // @synthesize snapActionsViewController=_snapActionsViewController;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
- (_Bool)isBlocking;
- (_Bool)shouldBlockOtherLayersFromDisplayingWithCurrentPage:(id)arg1;
- (_Bool)isRecyclable;
- (void)didReceiveUpdateProperties:(id)arg1;
- (void)dismissSnapActions;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 snapActionsServices:(id)arg4;

@end

