//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSpectaclesCommunicationChannelEndpoint;

@protocol SCSpectaclesNetworker <NSObject>
- (id <SCSpectaclesCommunicationChannel>)createChannelWithEndpoint:(SCSpectaclesCommunicationChannelEndpoint *)arg1 delegate:(id <SCSpectaclesCommunicationChannelDelegate>)arg2;
@end

