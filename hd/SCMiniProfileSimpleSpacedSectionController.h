//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

@class NSArray;

@interface SCMiniProfileSimpleSpacedSectionController : SCMiniProfileSectionController
{
    NSArray *_controllers;
}

@property(readonly, copy, nonatomic) NSArray *controllers; // @synthesize controllers=_controllers;
- (void).cxx_destruct;
- (double)minimumLineSpacingBetweenRows;
- (id)rowControllerAtIndex:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithRowControllers:(id)arg1;

@end
