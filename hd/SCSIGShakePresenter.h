//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCShakeToReportPresenting.h"

@class SCUserSession;

@interface SCSIGShakePresenter : NSObject <SCShakeToReportPresenting>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)presentReportScreenWithTopViewController:(id)arg1 withCapturedData:(id)arg2 featureNames:(id)arg3 shakeId:(id)arg4 reportType:(long long)arg5 delegate:(id)arg6;
- (void)presentReportViewControllerWithNavigationController:(id)arg1 delegate:(id)arg2 mode:(long long)arg3;
- (void)presentSettingScreenSelectWithNavigationController:(id)arg1 mode:(long long)arg2;
- (id)initWithUsersession:(id)arg1;

@end

