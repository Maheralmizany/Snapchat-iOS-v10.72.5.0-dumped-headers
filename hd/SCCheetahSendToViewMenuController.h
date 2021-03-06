//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCheetahSendToViewMenuActionHandlerDelegate.h"

@class NSString, SCUnifiedActionMenuPresenter, UIButton, UIViewController;

@interface SCCheetahSendToViewMenuController : NSObject <SCCheetahSendToViewMenuActionHandlerDelegate>
{
    unsigned long long _menuItems;
    UIViewController *_presentingViewController;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    id <SCCheetahSendToViewMenuControllerDelegate> _delegate;
    UIButton *_menuBarButton;
}

@property(retain, nonatomic) UIButton *menuBarButton; // @synthesize menuBarButton=_menuBarButton;
@property(nonatomic) __weak id <SCCheetahSendToViewMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendToViewMenuActionHandler:(id)arg1 handleActionForActionModel:(id)arg2;
- (void)sendToViewMenuActionHandlerDismissSendToViewMenu:(id)arg1;
- (void)_presentActionMenu;
- (id)initWithConfiguration:(id)arg1 previewExporter:(id)arg2 presentingViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

