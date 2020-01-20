//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSHTTPURLResponse, NSURL, SCBoltContentObject;

@interface SCMediaOrchestrationResult : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCBoltContentObject *_success_contentObject;
    NSURL *_success_contentURL;
    NSHTTPURLResponse *_failureRetriable_response;
}

+ (id)successWithContentObject:(id)arg1 contentURL:(id)arg2;
+ (id)failureRetriableWithResponse:(id)arg1;
+ (id)failurePermanent;
- (void).cxx_destruct;
- (void)matchSuccess:(CDUnknownBlockType)arg1 failureRetriable:(CDUnknownBlockType)arg2 failurePermanent:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
