//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCAddFriendsPageDisplayCell : NSObject <NSCopying>
{
    NSString *_sectionType;
    long long _index;
}

@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionType:(id)arg1 index:(long long)arg2;

@end

