//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLogout;

@interface SCLogoutScope : NSObject
{
    id <SCLogoutWorkflowDelegate> _delegate;
    SCLogout *_logout;
}

@property(readonly, nonatomic) SCLogout *logout; // @synthesize logout=_logout;
@property(readonly, nonatomic) __weak id <SCLogoutWorkflowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 logout:(id)arg2;

@end
