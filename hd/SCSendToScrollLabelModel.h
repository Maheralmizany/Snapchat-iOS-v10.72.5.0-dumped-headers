//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCSendToScrollLabelModel : NSObject <NSCopying>
{
    _Bool _isSectionHeader;
    NSString *_labelText;
}

@property(readonly, nonatomic) _Bool isSectionHeader; // @synthesize isSectionHeader=_isSectionHeader;
@property(readonly, copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabelText:(id)arg1 isSectionHeader:(_Bool)arg2;

@end

