//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCInAppRatingScope, SCInAppRatingWorkflow, SCUserSessionScope;

@interface SCInAppRatingEntryPoint : SCEntryPoint
{
    SCInAppRatingWorkflow *_inAppRatingWorkflow;
    SCUserSessionScope *_userSessionScope;
    SCInAppRatingScope *_inAppRatingScope;
}

@property(nonatomic) __weak SCInAppRatingScope *inAppRatingScope; // @synthesize inAppRatingScope=_inAppRatingScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end
