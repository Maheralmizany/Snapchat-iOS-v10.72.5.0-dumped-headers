//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SCAlertViewActionButton, SCNetworkImageView, SCUserSession, UIButton, UILabel, UITableView;

@interface SCLoginKitAppPermissionsView : UIView
{
    id <SCLoginKitAppPermissionsViewDelegate> _delegate;
    SCNetworkImageView *_appIconView;
    UILabel *_titleLabel;
    UILabel *_actionDescriptionLabel;
    SCAlertViewActionButton *_removeConnectedAppButton;
    UILabel *_removeConnectedAppButtonLabel;
    UIButton *_backButton;
    NSString *_appName;
    NSString *_appId;
    NSString *_appIconURL;
    unsigned long long _permissionsCount;
    SCUserSession *_userSession;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)_setBackgroundColorFromAppIcon:(id)arg1;
- (id)_changeColorBrightness:(id)arg1 byOffsetMultiplier:(double)arg2;
- (void)_backButtonPressed;
- (void)_initRemoveConnectedAppButtonView;
- (void)_initPermissionsTableView;
- (void)_initActionDescriptionLabelView;
- (void)_initTitleLabelView;
- (void)_initAppIconView;
- (void)_calculateHeightAndUpdateOffset;
- (void)_initHeaderView;
- (void)_presentUnlinkAlert;
- (void)addObservers;
- (void)layoutSubviews;
- (id)initWithConnection:(id)arg1 userSession:(id)arg2 delegate:(id)arg3;

@end
