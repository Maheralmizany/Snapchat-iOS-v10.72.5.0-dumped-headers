//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCXBitmojiLabel : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_lastSeen;
}

@property(readonly, copy, nonatomic) NSString *lastSeen; // @synthesize lastSeen=_lastSeen;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 lastSeen:(id)arg2;

@end
