//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCConversationStoreTrimmingExperimentContext : SCExperimentContext
{
    _Bool _conversationStoreTrimmingEnabled;
    long long _conversationStoreTrimmingLimit;
}

@property(readonly, nonatomic) long long conversationStoreTrimmingLimit; // @synthesize conversationStoreTrimmingLimit=_conversationStoreTrimmingLimit;
@property(readonly, nonatomic) _Bool conversationStoreTrimmingEnabled; // @synthesize conversationStoreTrimmingEnabled=_conversationStoreTrimmingEnabled;
- (void)setupParameters;
- (id)experimentName;

@end

