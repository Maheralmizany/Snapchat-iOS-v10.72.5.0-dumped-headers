//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class SOJUAdUnlockableDeepLink, SOJUAdUnlockableLongformAppInstall, SOJUAdUnlockableLongformVideoView, SOJUAdUnlockableLongformWebviewView;

@protocol SOJUAdUnlockableAttachmentImpression <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUAdUnlockableDeepLink *deepLinkImpression;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformAppInstall *appInstallImpression;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformWebviewView *remoteWebpageImpression;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformVideoView *longformVideoImpression;
@end

