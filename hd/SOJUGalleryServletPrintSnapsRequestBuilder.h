//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletPrintSnapsRequestBuilder : NSObject
{
    NSNumber *_requestType;
    NSString *_requestId;
    NSArray *_snapIds;
}

+ (id)withJUGalleryServletPrintSnapsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setSnapIds:(id)arg1;
- (id)setRequestId:(id)arg1;
- (id)setRequestType:(id)arg1;
- (id)build;
- (id)setRequestTypeEnum:(long long)arg1;
- (id)setRequestTypeValue:(int)arg1;

@end

