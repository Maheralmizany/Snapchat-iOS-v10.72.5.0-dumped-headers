//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SPScenarioSettingsSubversionFilter;

@interface SPScenarioSettingsSubversionModel : NSObject
{
    SPScenarioSettingsSubversionFilter *_filter;
    NSString *_path;
    NSNumber *_length;
}

@property(readonly, nonatomic) NSNumber *length; // @synthesize length=_length;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) SPScenarioSettingsSubversionFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

