//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCSendToSuggestionViewModel;

@protocol SCSendToCoRecipientRepository
- (long long)totalUniqueSuggestions;
- (void)sendSucceeded;
- (void)setEnabled:(_Bool)arg1;
- (void)syncData;
- (SCSendToSuggestionViewModel *)suggestionViewModel;
@end

