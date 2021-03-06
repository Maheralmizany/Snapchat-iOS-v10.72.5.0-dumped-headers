//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SCSettingsStoryNotificationsSectionDataModel : NSObject <NSCopying, NSCoding>
{
    unsigned long long _sectionType;
    NSString *_sectionTitle;
}

@property(readonly, copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(readonly, nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionType:(unsigned long long)arg1 sectionTitle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

