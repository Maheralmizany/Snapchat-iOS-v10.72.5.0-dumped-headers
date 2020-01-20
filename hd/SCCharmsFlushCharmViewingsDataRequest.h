//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet, SCCharmsOwner;

@interface SCCharmsFlushCharmViewingsDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCCharmsOwner *_flush_charmsOwner;
    SCCharmsOwner *_flushViewingToRemote_charmsOwner;
    NSSet *_flushViewingToRemote_viewedCharmIdentifiers;
}

+ (id)flushWithCharmsOwner:(id)arg1;
+ (id)flushViewingToRemoteWithCharmsOwner:(id)arg1 viewedCharmIdentifiers:(id)arg2;
- (void).cxx_destruct;
- (void)matchFlush:(CDUnknownBlockType)arg1 flushViewingToRemote:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

