//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SCArcadiaObjectInfoBuilder : NSObject
{
    NSString *_name;
    NSString *_bId;
    NSString *_jId;
    NSDate *_fetchDate;
}

+ (id)withArcadiaObjectInfo:(id)arg1;
- (void).cxx_destruct;
- (id)setFetchDate:(id)arg1;
- (id)setJId:(id)arg1;
- (id)setBId:(id)arg1;
- (id)setName:(id)arg1;
- (id)build;

@end
