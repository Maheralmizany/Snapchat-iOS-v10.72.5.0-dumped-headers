//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, NSValue, SCSearchQuery, SCSectionKitHeaderModel;

@interface SCSearchSimpleSnapCarouselSectionConfiguration : NSObject <NSCopying>
{
    SCSearchQuery *_query;
    SCSectionKitHeaderModel *_sectionHeaderModel;
    NSString *_sectionType;
    NSArray *_stories;
    long long _cellStyle;
    long long _contentMode;
    unsigned long long _numberOfRows;
    double _minimumInteritemSpacing;
    NSValue *_sectionInsets;
    NSString *_resultSectionIdentifier;
}

@property(readonly, copy, nonatomic) NSString *resultSectionIdentifier; // @synthesize resultSectionIdentifier=_resultSectionIdentifier;
@property(readonly, copy, nonatomic) NSValue *sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(readonly, nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, copy, nonatomic) NSArray *stories; // @synthesize stories=_stories;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) SCSectionKitHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQuery:(id)arg1 sectionHeaderModel:(id)arg2 sectionType:(id)arg3 stories:(id)arg4 cellStyle:(long long)arg5 contentMode:(long long)arg6 numberOfRows:(unsigned long long)arg7 minimumInteritemSpacing:(double)arg8 sectionInsets:(id)arg9 resultSectionIdentifier:(id)arg10;

@end

