//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCNNetworkManagerProgressiveDownloadMetadata : NSObject
{
    int _statusCode;
    NSString *_requestId;
    long long _contentLength;
}

+ (id)ProgressiveDownloadMetadataWithRequestId:(id)arg1 statusCode:(int)arg2 contentLength:(long long)arg3;
@property(readonly, nonatomic) long long contentLength; // @synthesize contentLength=_contentLength;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestId:(id)arg1 statusCode:(int)arg2 contentLength:(long long)arg3;

@end

