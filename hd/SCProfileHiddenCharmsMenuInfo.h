//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCCharmsOwner;

@interface SCProfileHiddenCharmsMenuInfo : NSObject <NSCopying>
{
    SCCharmsOwner *_charmsOwner;
    NSString *_restoreCharmPromptTemplate;
}

@property(readonly, copy, nonatomic) NSString *restoreCharmPromptTemplate; // @synthesize restoreCharmPromptTemplate=_restoreCharmPromptTemplate;
@property(readonly, copy, nonatomic) SCCharmsOwner *charmsOwner; // @synthesize charmsOwner=_charmsOwner;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharmsOwner:(id)arg1 restoreCharmPromptTemplate:(id)arg2;

@end

