//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SSCategoriesResult : NSObject
{
    NSString *_resourcesUrl;
    NSArray *_categories;
}

@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) NSString *resourcesUrl; // @synthesize resourcesUrl=_resourcesUrl;
- (void).cxx_destruct;
- (id)initWithResourcesUrl:(id)arg1 categories:(id)arg2;

@end

