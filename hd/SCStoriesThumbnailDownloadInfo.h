//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCMediaEncryptionInfo;

@interface SCStoriesThumbnailDownloadInfo : NSObject <NSCopying>
{
    NSString *_thumbnailURL;
    SCMediaEncryptionInfo *_encryptionInfo;
}

@property(readonly, copy, nonatomic) SCMediaEncryptionInfo *encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
@property(readonly, copy, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithThumbnailURL:(id)arg1 encryptionInfo:(id)arg2;

@end
