//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPGZipArchiver.h"

@class NSString;

@interface SPGZipArchiverImplementation : NSObject <SPGZipArchiver>
{
    id <SPStringsProvider> _stringsProvider;
}

@property(retain, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
- (void).cxx_destruct;
- (_Bool)ungzipFileAtPath:(id)arg1 toDestinationPath:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

