//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCCharmsOwner;

@interface SCCharmsViewCharmsDataRequest : NSObject <NSCopying>
{
    int _charmIdentifier;
    SCCharmsOwner *_charmsOwner;
}

@property(readonly, nonatomic) int charmIdentifier; // @synthesize charmIdentifier=_charmIdentifier;
@property(readonly, copy, nonatomic) SCCharmsOwner *charmsOwner; // @synthesize charmsOwner=_charmsOwner;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharmsOwner:(id)arg1 charmIdentifier:(int)arg2;

@end
