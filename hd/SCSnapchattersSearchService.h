//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSessionRequestManager;

@interface SCSnapchattersSearchService : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)searchSnapchattersWithQueryText:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithSessionRequestManager:(id)arg1;

@end
