//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCDiscoverFeedStreamingEncryptionInfo;

@interface SCDiscoverFeedStreamingMediaInfo : NSObject <NSCopying>
{
    NSString *_mediaURL;
    NSString *_zipURL;
    SCDiscoverFeedStreamingEncryptionInfo *_encryptionInfo;
    unsigned long long _muxedMediaSize;
}

@property(readonly, nonatomic) unsigned long long muxedMediaSize; // @synthesize muxedMediaSize=_muxedMediaSize;
@property(readonly, copy, nonatomic) SCDiscoverFeedStreamingEncryptionInfo *encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
@property(readonly, copy, nonatomic) NSString *zipURL; // @synthesize zipURL=_zipURL;
@property(readonly, copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL=_mediaURL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaURL:(id)arg1 zipURL:(id)arg2 encryptionInfo:(id)arg3 muxedMediaSize:(unsigned long long)arg4;
- (id)xLogObjectInfo;

@end
