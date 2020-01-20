//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSString, SCLensUploadAssetInfo;

@interface SCLensRemoteAssetsUploadOperationTask : NSObject <NSCoding>
{
    unsigned long long _state;
    SCLensUploadAssetInfo *_assetInfo;
    NSData *_encryptionKey;
    NSData *_encryptionIv;
    NSString *_effectId;
}

@property(readonly, nonatomic) NSString *effectId; // @synthesize effectId=_effectId;
@property(readonly, nonatomic) NSData *encryptionIv; // @synthesize encryptionIv=_encryptionIv;
@property(readonly, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(readonly, nonatomic) SCLensUploadAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initAssetWithAssetInfo:(id)arg1 encryptionKey:(id)arg2 encryptionIv:(id)arg3 effectId:(id)arg4;

@end

