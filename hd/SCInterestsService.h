//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCUserSession;

@interface SCInterestsService : NSObject
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)fetchInterestsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)clearInterestsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1;

@end
