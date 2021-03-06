//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSpectaclesTask.h"

@class NSArray;

@interface SCSpectaclesTaskMediaList : SCSpectaclesTask
{
    unsigned long long _retryCount;
    NSArray *_mediaList;
}

@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
- (void).cxx_destruct;
- (double)requiredDelay;
- (_Bool)supportsBatchingOnTransferChannel:(long long)arg1;
- (_Bool)handleResponse:(id)arg1;
- (id)nextRequest:(long long)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isFinished;
- (unsigned long long)type;

@end

