//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCAuthenticationErrorMessageFormatter;

@interface SCChangePasswordResponseParser : NSObject
{
    SCAuthenticationErrorMessageFormatter *_errorFormatter;
}

- (void).cxx_destruct;
- (id)parseFailureResponse:(id)arg1 error:(id)arg2;
- (id)parseSuccessResponse:(id)arg1 responseDictionary:(id)arg2;
- (id)initWithErrorFormatter:(id)arg1;
- (id)initWithDefaults;

@end
