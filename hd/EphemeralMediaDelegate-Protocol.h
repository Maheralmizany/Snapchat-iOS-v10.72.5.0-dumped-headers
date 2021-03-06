//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EphemeralMedia, NSDictionary;

@protocol EphemeralMediaDelegate <NSObject>
- (void)ephemeralMediaSendDidFailForMedia:(EphemeralMedia *)arg1;
- (void)ephemeralMediaSendDidSucceedForMedia:(EphemeralMedia *)arg1 snapIdsAndTimestamps:(NSDictionary *)arg2 completion:(void (^)(void))arg3;
- (void)ephemeralMediaUploadDidFailForMedia:(EphemeralMedia *)arg1;
- (void)ephemeralMediaUploadDidSucceedForMedia:(EphemeralMedia *)arg1;
- (void)ephemeralMediaUploadDidStartForMedia:(EphemeralMedia *)arg1;
@end

