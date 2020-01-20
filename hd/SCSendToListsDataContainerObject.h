//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface SCSendToListsDataContainerObject : NSObject <NSCopying, NSCoding>
{
    NSString *_userId;
    NSArray *_sortedListDataModels;
    NSDictionary *_listIdToDataModelMap;
}

@property(readonly, copy, nonatomic) NSDictionary *listIdToDataModelMap; // @synthesize listIdToDataModelMap=_listIdToDataModelMap;
@property(readonly, copy, nonatomic) NSArray *sortedListDataModels; // @synthesize sortedListDataModels=_sortedListDataModels;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 sortedListDataModels:(id)arg2 listIdToDataModelMap:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
