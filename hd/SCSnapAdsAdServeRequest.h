//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCAdServeRequestMetadata;

@interface SCSnapAdsAdServeRequest : NSObject
{
    SCAdServeRequestMetadata *_metadata;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(readonly, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(readonly, nonatomic) SCAdServeRequestMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

@end

