//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCSendToConfirmationItemViewModel : NSObject <NSCopying>
{
    NSString *_itemKey;
    NSString *_itemDisplayName;
}

@property(readonly, copy, nonatomic) NSString *itemDisplayName; // @synthesize itemDisplayName=_itemDisplayName;
@property(readonly, copy, nonatomic) NSString *itemKey; // @synthesize itemKey=_itemKey;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemKey:(id)arg1 itemDisplayName:(id)arg2;

@end

