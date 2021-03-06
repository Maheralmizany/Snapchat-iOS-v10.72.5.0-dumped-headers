//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBloopsCategoriesProviding.h"

@class NSArray, NSString, Splendid;

@interface SCBloopsCategoriesProvider : NSObject <SCBloopsCategoriesProviding>
{
    Splendid *_splendid;
    NSArray *_categories;
}

@property(retain) NSArray *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (id)fetchCategoriesWithBloopsTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSplendid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

