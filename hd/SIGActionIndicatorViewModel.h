//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SIGActionIndicatorViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    _Bool _select_isSelected;
}

+ (id)selectWithIsSelected:(_Bool)arg1;
- (void)matchSelect:(CDUnknownBlockType)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
