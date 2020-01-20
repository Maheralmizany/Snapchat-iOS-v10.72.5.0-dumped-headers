//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, SCSearchQuery, SCSectionKitHeaderModel;

@interface SCSearchPublisherSectionConfiguration : NSObject <NSCopying>
{
    NSString *_sectionTitle;
    NSString *_sectionType;
    SCSectionKitHeaderModel *_sectionHeaderModel;
    NSArray *_publishers;
    SCSearchQuery *_query;
}

@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) NSArray *publishers; // @synthesize publishers=_publishers;
@property(readonly, copy, nonatomic) SCSectionKitHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionTitle:(id)arg1 sectionType:(id)arg2 sectionHeaderModel:(id)arg3 publishers:(id)arg4 query:(id)arg5;

@end
