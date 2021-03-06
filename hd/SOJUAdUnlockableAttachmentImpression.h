//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdUnlockableAttachmentImpression.h"

@class NSString, SOJUAdUnlockableDeepLink, SOJUAdUnlockableLongformAppInstall, SOJUAdUnlockableLongformVideoView, SOJUAdUnlockableLongformWebviewView;

@interface SOJUAdUnlockableAttachmentImpression : NSObject <SOJUAdUnlockableAttachmentImpression>
{
    SOJUAdUnlockableLongformVideoView *_longformVideoImpression;
    SOJUAdUnlockableLongformWebviewView *_remoteWebpageImpression;
    SOJUAdUnlockableLongformAppInstall *_appInstallImpression;
    SOJUAdUnlockableDeepLink *_deepLinkImpression;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUAdUnlockableDeepLink *deepLinkImpression; // @synthesize deepLinkImpression=_deepLinkImpression;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformAppInstall *appInstallImpression; // @synthesize appInstallImpression=_appInstallImpression;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformWebviewView *remoteWebpageImpression; // @synthesize remoteWebpageImpression=_remoteWebpageImpression;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformVideoView *longformVideoImpression; // @synthesize longformVideoImpression=_longformVideoImpression;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLongformVideoImpression:(id)arg1 remoteWebpageImpression:(id)arg2 appInstallImpression:(id)arg3 deepLinkImpression:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

