//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Media, NSDictionary, NSError, NSHTTPURLResponse, SCRequest;

@protocol MediaDelegate <NSObject>
- (_Bool)isPsychomantis;
- (_Bool)isImage;
- (_Bool)isVideoStreaming;
- (_Bool)isSpectaclesVideo;
- (_Bool)isVideoWithSound;
- (_Bool)isVideo;

@optional
- (void)didFinishDownload:(Media *)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3 additionalParams:(NSDictionary *)arg4;
- (void)didFinishDownload:(Media *)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3;
- (void)didStartDownload:(Media *)arg1;
- (void)fetchMediaResponseHandlerCustom:(Media *)arg1 request:(SCRequest *)arg2 response:(NSHTTPURLResponse *)arg3 error:(NSError *)arg4;
- (void)fetchMediaDidSucceedForMedia:(Media *)arg1 isFromCache:(_Bool)arg2;
- (void)fetchMediaDidSucceedForMedia:(Media *)arg1;
- (void)fetchMediaBadRequestForMedia:(Media *)arg1;
- (void)fetchMediaNotFoundForMedia:(Media *)arg1;
- (void)fetchMediaIsGoneForMedia:(Media *)arg1;
- (void)fetchMediaDidFailForMedia:(Media *)arg1 error:(NSError *)arg2;
- (void)fetchMediaIsLoadingForMedia:(Media *)arg1;
- (void)fetchMediaIsLoadingForMedia:(Media *)arg1 userInitiated:(_Bool)arg2;
@end
