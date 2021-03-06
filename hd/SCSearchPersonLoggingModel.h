//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCSearchPersonLoggingModel : NSObject <NSCopying>
{
    _Bool _isVerified;
    NSString *_username;
    long long _searchResultReason;
}

@property(readonly, nonatomic) long long searchResultReason; // @synthesize searchResultReason=_searchResultReason;
@property(readonly, nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUsername:(id)arg1 isVerified:(_Bool)arg2 searchResultReason:(long long)arg3;

@end

