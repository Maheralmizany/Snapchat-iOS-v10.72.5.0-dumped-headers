//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCDiscoverFeedInterestSelectionDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_interestExpansionRequest_categoryId;
    NSString *_interestSelectionRequest_categoryId;
    double _interestSelectionRequest_lastSelectedTimeStamp;
    long long _fetchRequest_feedType;
}

+ (id)submissionRequest;
+ (id)resetSubmissionStateRequest;
+ (id)interestSelectionRequestWithCategoryId:(id)arg1 lastSelectedTimeStamp:(double)arg2;
+ (id)interestExpansionRequestWithCategoryId:(id)arg1;
+ (id)fetchRequestWithFeedType:(long long)arg1;
- (void).cxx_destruct;
- (void)matchInterestExpansionRequest:(CDUnknownBlockType)arg1 interestSelectionRequest:(CDUnknownBlockType)arg2 fetchRequest:(CDUnknownBlockType)arg3 submissionRequest:(CDUnknownBlockType)arg4 resetSubmissionStateRequest:(CDUnknownBlockType)arg5;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
