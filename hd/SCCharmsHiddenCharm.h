//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCCharmsHiddenCharm : SCDocObject <NSCopying>
{
    int _charmIdentifier;
    NSString *_ownerIdentifier;
    long long _ownerType;
    NSString *_displayName;
    long long _hiddenAtTsMs;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, nonatomic) long long hiddenAtTsMs; // @synthesize hiddenAtTsMs=_hiddenAtTsMs;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) long long ownerType; // @synthesize ownerType=_ownerType;
@property(readonly, nonatomic) int charmIdentifier; // @synthesize charmIdentifier=_charmIdentifier;
@property(readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOwnerIdentifier:(id)arg1 charmIdentifier:(int)arg2 ownerType:(long long)arg3 displayName:(id)arg4 hiddenAtTsMs:(long long)arg5;

@end

