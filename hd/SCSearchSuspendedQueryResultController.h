//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCSearchQueryResult, SCSearchSectionController;

@interface SCSearchSuspendedQueryResultController : NSObject
{
    SCSearchQueryResult *_suspendedQueryResultDataModel;
    NSArray *_suspendedQueryResultSectionWithConfigurations;
    SCSearchSectionController *_sectionController;
}

- (void).cxx_destruct;
- (id)_prepareSuspendedConfiguredSectionsFromSectionDescriptors:(id)arg1;
- (id)suspendedQueryResultSectionWithConfigurations;
- (id)suspenedQueryResultDataModel;
- (void)cleanSuspendedQueryResultDataModel;
- (void)updateSuspendedQueryResultDataModel:(id)arg1;
- (id)initWithSectionController:(id)arg1;

@end
