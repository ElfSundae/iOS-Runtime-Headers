/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRestaurantReservationBooking : NSObject <INRestaurantReservationBookingExport, NSCopying, NSSecureCoding> {
    BOOL  _bookingAvailable;
    NSDate * _bookingDate;
    NSString * _bookingDescription;
    NSString * _bookingIdentifier;
    NSArray * _offers;
    unsigned int  _partySize;
    BOOL  _requiresEmailAddress;
    BOOL  _requiresManualRequest;
    BOOL  _requiresName;
    BOOL  _requiresPhoneNumber;
    INRestaurant * _restaurant;
}

@property (getter=isBookingAvailable, nonatomic) BOOL bookingAvailable;
@property (nonatomic, copy) NSDate *bookingDate;
@property (nonatomic, copy) NSString *bookingDescription;
@property (nonatomic, copy) NSString *bookingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic) unsigned int partySize;
@property (nonatomic) BOOL requiresEmailAddress;
@property (nonatomic) BOOL requiresManualRequest;
@property (nonatomic) BOOL requiresName;
@property (nonatomic) BOOL requiresPhoneNumber;
@property (nonatomic, copy) INRestaurant *restaurant;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookingDate;
- (id)bookingDescription;
- (id)bookingIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned int)arg3 bookingIdentifier:(id)arg4;
- (BOOL)isBookingAvailable;
- (BOOL)isEqual:(id)arg1;
- (id)offers;
- (unsigned int)partySize;
- (BOOL)requiresEmailAddress;
- (BOOL)requiresManualRequest;
- (BOOL)requiresName;
- (BOOL)requiresPhoneNumber;
- (id)restaurant;
- (void)setBookingAvailable:(BOOL)arg1;
- (void)setBookingDate:(id)arg1;
- (void)setBookingDescription:(id)arg1;
- (void)setBookingIdentifier:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPartySize:(unsigned int)arg1;
- (void)setRequiresEmailAddress:(BOOL)arg1;
- (void)setRequiresManualRequest:(BOOL)arg1;
- (void)setRequiresName:(BOOL)arg1;
- (void)setRequiresPhoneNumber:(BOOL)arg1;
- (void)setRestaurant:(id)arg1;

@end
