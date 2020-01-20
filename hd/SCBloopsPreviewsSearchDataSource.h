//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBloopsPreviewsDataSource.h"

@class NSString;

@interface SCBloopsPreviewsSearchDataSource : NSObject <SCBloopsPreviewsDataSource>
{
    unsigned long long _type;
    unsigned long long _pickerDataSourceType;
    NSString *_searchQuery;
}

@property(readonly, copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(readonly, nonatomic) unsigned long long pickerDataSourceType; // @synthesize pickerDataSourceType=_pickerDataSourceType;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithSearchQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
