//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface SCCommerceStoreCategory : NSObject
{
    NSArray *_heroImageInfoList;
    NSMutableArray *_subCategories;
    NSString *_idValue;
    NSString *_name;
    NSString *_displayName;
    NSString *_storeId;
}

@property(readonly, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
- (id)heroImage;
@property(readonly, nonatomic) NSArray *subCategories;
- (void)addSubCategory:(id)arg1;
- (id)initWithIdValue:(id)arg1 storeId:(id)arg2 name:(id)arg3 heroImageInfo:(id)arg4;
- (id)initWithIdValue:(id)arg1 name:(id)arg2;

@end

