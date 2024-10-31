for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_ADD8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_ADD8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_LOCK_ADD8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ADD16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ADD16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_ADD16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ADD32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ADD32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_ADD32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ADD64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ADD64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_ADD64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : mem) {
	n = fe64_ADD8rm_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ADD16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ADD32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ADD64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_ADD8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int16_t op1 = 0;
	n = fe64_ADD16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_ADD32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_ADD64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_OR8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_OR8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_LOCK_OR8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_OR16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_OR16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_OR16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_OR32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_OR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_OR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_OR64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_OR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_OR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : mem) {
	n = fe64_OR8rm_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_OR16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_OR32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_OR64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_OR8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int16_t op1 = 0;
	n = fe64_OR16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_OR32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_OR64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_ADC8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_ADC8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_LOCK_ADC8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ADC16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ADC16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_ADC16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ADC32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ADC32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_ADC32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ADC64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ADC64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_ADC64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : mem) {
	n = fe64_ADC8rm_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ADC16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ADC32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ADC64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_ADC8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int16_t op1 = 0;
	n = fe64_ADC16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_ADC32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_ADC64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_SBB8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_SBB8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_LOCK_SBB8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SBB16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SBB16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_SBB16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SBB32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SBB32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_SBB32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SBB64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SBB64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_SBB64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : mem) {
	n = fe64_SBB8rm_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SBB16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SBB32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SBB64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SBB8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int16_t op1 = 0;
	n = fe64_SBB16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_SBB32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_SBB64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_AND8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_AND8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_LOCK_AND8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_AND16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AND16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_AND16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_AND32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AND32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_AND32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_AND64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AND64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_AND64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : mem) {
	n = fe64_AND8rm_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_AND16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_AND32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_AND64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_AND8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int16_t op1 = 0;
	n = fe64_AND16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_AND32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_AND64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_SUB8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_SUB8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_LOCK_SUB8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SUB16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SUB16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_SUB16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SUB32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SUB32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_SUB32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SUB64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SUB64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_SUB64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : mem) {
	n = fe64_SUB8rm_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SUB16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SUB32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SUB64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SUB8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int16_t op1 = 0;
	n = fe64_SUB16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_SUB32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_SUB64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_XOR8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_XOR8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_LOCK_XOR8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_XOR16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_XOR16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_XOR16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_XOR32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_XOR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_XOR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_XOR64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_XOR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_XOR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : mem) {
	n = fe64_XOR8rm_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_XOR16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_XOR32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_XOR64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_XOR8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int16_t op1 = 0;
	n = fe64_XOR16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_XOR32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_XOR64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_CMP8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_CMP8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMP16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_CMP16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMP32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_CMP32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMP64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_CMP64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : mem) {
	n = fe64_CMP8rm_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMP16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMP32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMP64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_CMP8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int16_t op1 = 0;
	n = fe64_CMP16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_CMP32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_CMP64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	n = fe64_PUSH16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_PUSHr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_POP16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_POPr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVSXr16r32(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVSXr16m32(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVSXr32r32(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVSXr32m32(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVSXr64r32(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVSXr64m32(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
	{
	int16_t op0 = 0;
	n = fe64_PUSH16i(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	int32_t op0 = 0;
	n = fe64_PUSHi(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int16_t op2 = 0;
	n = fe64_IMUL16rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	{
	int16_t op2 = 0;
	n = fe64_IMUL16rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int32_t op2 = 0;
	n = fe64_IMUL32rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	{
	int32_t op2 = 0;
	n = fe64_IMUL32rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int32_t op2 = 0;
	n = fe64_IMUL64rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	{
	int32_t op2 = 0;
	n = fe64_IMUL64rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
	n = fe64_INS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_INS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_INS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_INS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_INS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_INS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_INS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_INS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_OUTS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_OUTS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_OUTS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_OUTS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_OUTS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_OUTS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_OUTS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_OUTS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	{
	const void* op0 = 0;
	n = fe64_JO(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JNO(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JC(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JNC(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JZ(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JNZ(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JBE(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JA(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JS(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JNS(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JP(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JNP(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JL(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JGE(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JLE(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JG(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_ADD8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_ADD8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_OR8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_OR8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_ADC8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_ADC8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SBB8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_SBB8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_AND8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_AND8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SUB8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_SUB8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_XOR8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_XOR8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_CMP8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_ADD16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_LOCK_ADD16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_ADD32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_ADD32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_ADD64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_ADD64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_OR16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_LOCK_OR16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_OR32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_OR32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_OR64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_OR64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_ADC16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_LOCK_ADC16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_ADC32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_ADC32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_ADC64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_ADC64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_SBB16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_LOCK_SBB16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_SBB32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_SBB32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_SBB64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_SBB64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_AND16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_LOCK_AND16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_AND32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_AND32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_AND64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_AND64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_SUB16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_LOCK_SUB16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_SUB32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_SUB32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_SUB64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_SUB64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_XOR16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_LOCK_XOR16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_XOR32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_XOR32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_XOR64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_LOCK_XOR64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_CMP16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_CMP32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_CMP64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_TEST8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_TEST8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_TEST16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_TEST16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_TEST32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_TEST32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_TEST64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_TEST64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_XCHG8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_XCHG8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_LOCK_XCHG8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_XCHG16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_XCHG16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_XCHG16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_XCHG32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_XCHG32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_XCHG32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_XCHG64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_XCHG64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_XCHG64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_MOV8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_MOV8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOV16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_MOV16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOV32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_MOV32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOV64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_MOV64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : mem) {
	n = fe64_MOV8rm_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOV16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOV32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOV64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : sreg_regs) {
	n = fe64_MOV_S2Grr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : sreg_regs) {
	n = fe64_MOV_S2Gmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LEA16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LEA32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LEA64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : sreg_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOV_G2Srr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : sreg_regs) {
for (auto& op1 : mem) {
	n = fe64_MOV_G2Srm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
	n = fe64_POP16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_POPm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_C_EX16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CBW(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_C_EX32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CWDE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_C_EX64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CDQE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_C_SEP16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CWD(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_C_SEP32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CDQ(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_C_SEP64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CQO(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FWAIT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_PUSHF16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_PUSHF(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_POPF16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_POPF(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SAHF(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_LAHF(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gplh_regs) {
	{
	uintptr_t op1 = 0;
	n = fe64_MOV8ra_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	uintptr_t op1 = 0;
	n = fe64_MOV16ra(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	uintptr_t op1 = 0;
	n = fe64_MOV32ra(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	uintptr_t op1 = 0;
	n = fe64_MOV64ra(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
	{
	uintptr_t op0 = 0;
for (auto& op1 : gplh_regs) {
	n = fe64_MOV8ar_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	}
	{
	uintptr_t op0 = 0;
for (auto& op1 : gp_regs) {
	n = fe64_MOV16ar(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	}
	{
	uintptr_t op0 = 0;
for (auto& op1 : gp_regs) {
	n = fe64_MOV32ar(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	}
	{
	uintptr_t op0 = 0;
for (auto& op1 : gp_regs) {
	n = fe64_MOV64ar(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	}
	n = fe64_MOVS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_MOVS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_MOVS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_MOVS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_MOVS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_MOVS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_MOVS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_MOVS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CMPS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPNZ_CMPS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPZ_CMPS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CMPS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPNZ_CMPS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPZ_CMPS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CMPS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPNZ_CMPS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPZ_CMPS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CMPS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPNZ_CMPS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPZ_CMPS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_TEST8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int16_t op1 = 0;
	n = fe64_TEST16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_TEST32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_TEST64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
	n = fe64_STOS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_STOS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_STOS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_STOS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_STOS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_STOS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_STOS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_STOS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_LODS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_LODS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_LODS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_LODS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_LODS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_LODS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_LODS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_LODS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SCAS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPNZ_SCAS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPZ_SCAS8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SCAS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPNZ_SCAS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPZ_SCAS16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SCAS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPNZ_SCAS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPZ_SCAS32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SCAS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPNZ_SCAS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REPZ_SCAS64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_MOV8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int16_t op1 = 0;
	n = fe64_MOV16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int32_t op1 = 0;
	n = fe64_MOV32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int64_t op1 = 0;
	n = fe64_MOV64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_ROL8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_ROL8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_ROR8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_ROR8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_RCL8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_RCL8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_RCR8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_RCR8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SHL8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SHL8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SHR8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SHR8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SAR8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SAR8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_ROL16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_ROL16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_ROL32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_ROL32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_ROL64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_ROL64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_ROR16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_ROR16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_ROR32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_ROR32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_ROR64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_ROR64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_RCL16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_RCL16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_RCL32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_RCL32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_RCL64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_RCL64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_RCR16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_RCR16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_RCR32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_RCR32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_RCR64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_RCR64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SHL16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SHL16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SHL32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SHL32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SHL64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SHL64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SHR16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SHR16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SHR32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SHR32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SHR64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SHR64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SAR16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SAR16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SAR32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SAR32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_SAR64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SAR64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
	{
	int16_t op0 = 0;
	n = fe64_RETi(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	n = fe64_RET(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_MOV8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
	{
	int8_t op0 = 0;
	n = fe64_XABORTi(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_MOV16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_MOV32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_MOV64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
	{
	const void* op0 = 0;
	n = fe64_XBEGIN(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	int32_t op0 = 0;
	n = fe64_ENTER16i(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	int32_t op0 = 0;
	n = fe64_ENTERi(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	n = fe64_LEAVE16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_LEAVE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	{
	int16_t op0 = 0;
	n = fe64_RETF16i(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	int16_t op0 = 0;
	n = fe64_RETF32i(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	int16_t op0 = 0;
	n = fe64_RETF64i(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	n = fe64_RETF16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RETF32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RETF64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_INT3(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	{
	int8_t op0 = 0;
	n = fe64_INTi(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	n = fe64_IRET16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_IRET32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_IRET64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_ROL8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_ROL8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_ROR8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_ROR8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_RCL8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_RCL8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_RCR8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_RCR8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_SHL8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_SHL8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_SHR8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_SHR8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_SAR8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_SAR8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ROL16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ROL16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ROL32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ROL32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ROL64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ROL64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ROR16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ROR16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ROR32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ROR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ROR64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_ROR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_RCL16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_RCL16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_RCL32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_RCL32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_RCL64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_RCL64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_RCR16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_RCR16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_RCR32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_RCR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_RCR64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_RCR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SHL16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SHL16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SHL32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SHL32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SHL64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SHL64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SHR16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SHR16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SHR32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SHR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SHR64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SHR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SAR16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SAR16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SAR32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SAR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SAR64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_SAR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
	n = fe64_XLATB(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	{
	const void* op0 = 0;
	n = fe64_LOOPNZ(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_LOOPZ(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_LOOP(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JCXZ(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_IN8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_IN16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_IN32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_IN64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
	{
	int8_t op1 = 0;
	n = fe64_OUT8ri_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_OUT16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_OUT32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_OUT64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
	{
	const void* op0 = 0;
	n = fe64_CALL(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	{
	const void* op0 = 0;
	n = fe64_JMP(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	n = fe64_IN8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_IN16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_IN32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_IN64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_OUT8(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_OUT16(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_OUT32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_OUT64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_INT1(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_HLT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CMC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_TEST8mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gplh_regs) {
	n = fe64_NOT8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NOT8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_NOT8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_NEG8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NEG8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_NEG8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_MUL8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_MUL8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_IMUL8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_IMUL8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_DIV8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_DIV8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_IDIV8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_IDIV8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	{
	int16_t op1 = 0;
	n = fe64_TEST16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_TEST32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int32_t op1 = 0;
	n = fe64_TEST64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	n = fe64_NOT16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NOT16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_NOT16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_NOT32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NOT32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_NOT32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_NOT64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NOT64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_NOT64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_NEG16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NEG16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_NEG16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_NEG32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NEG32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_NEG32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_NEG64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NEG64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_NEG64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_MUL16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_MUL16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_MUL32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_MUL32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_MUL64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_MUL64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_IMUL16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_IMUL16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_IMUL32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_IMUL32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_IMUL64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_IMUL64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_DIV16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_DIV16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_DIV32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_DIV32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_DIV64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_DIV64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_IDIV16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_IDIV16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_IDIV32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_IDIV32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_IDIV64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_IDIV64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_CLC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_STC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CLI(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_STI(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CLD(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_STD(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gplh_regs) {
	n = fe64_INC8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_INC8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_INC8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_DEC8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_DEC8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_DEC8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_INC16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_INC16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_INC16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_INC32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_INC32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_INC32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_INC64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_INC64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_INC64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_DEC16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_DEC16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_DEC16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_DEC32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_DEC32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_DEC32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_DEC64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_DEC64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_DEC64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_CALLr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CALLm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CALLF16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CALLF32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CALLF64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_JMPr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_JMPm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_JMPF16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_JMPF32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_JMPF64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PUSH16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PUSHm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_SLDTr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SLDTm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_STRr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_STRm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_LLDTr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LLDTm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_LTRr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LTRm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_VERRr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_VERRm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_VERWr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_VERWm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SGDTm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SIDTm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LGDTm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LIDTm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SMSWm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_SMSW16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_SMSW32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_SMSW64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_LMSWr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LMSWm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_INVLPG8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_ENCLV(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_MONITOR(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_MWAIT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CLAC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_STAC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_ENCLS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_XGETBV(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_XSETBV(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_XEND(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_XTEST(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_ENCLU(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SWAPGS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RDTSCP(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_LAR16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LAR16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_LAR32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LAR32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_LAR64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LAR64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_LSL16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LSL16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_LSL32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LSL32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_LSL64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LSL64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
	n = fe64_SYSCALL(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CLTS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SYSRET(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_INVD(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_WBINVD(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_UD2(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
	n = fe64_PREFETCHm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PREFETCHWm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PREFETCHWT1m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_FEMMS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_3DNOWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_3DNOWrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
	n = fe64_PREFETCHNTAm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PREFETCHT0m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PREFETCHT1m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PREFETCHT2m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PREFETCHIT1m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PREFETCHIT0m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_NOP16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NOP16m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_NOP32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NOP32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_NOP64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_NOP64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
for (auto& op1 : cr_regs) {
	n = fe64_MOV_CR2Grr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : dr_regs) {
	n = fe64_MOV_DR2Grr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : cr_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOV_G2CRrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : dr_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOV_G2DRrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
	n = fe64_WRMSR(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RDTSC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RDMSR(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RDPMC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SYSENTER(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SYSEXIT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_GETSEC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVO16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVO16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVO32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVO32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVO64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVO64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNO16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNO16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNO32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNO32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNO64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNO64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVC16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVC16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVC32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVC32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVC64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVC64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNC16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNC16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNC32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNC32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNC64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNC64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVZ16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVZ16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVZ32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVZ32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVZ64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVZ64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNZ16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNZ16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNZ32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNZ32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNZ64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNZ64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVBE16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVBE16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVBE32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVBE32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVBE64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVBE64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVA16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVA16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVA32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVA32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVA64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVA64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVS16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVS16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVS32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVS32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVS64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVS64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNS16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNS16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNS32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNS32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNS64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNS64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVP16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVP16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVP32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVP32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVP64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVP64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNP16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNP16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNP32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNP32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVNP64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVNP64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVL16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVL16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVL32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVL32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVL64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVL64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVGE16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVGE16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVGE32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVGE32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVGE64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVGE64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVLE16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVLE16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVLE32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVLE32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVLE64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVLE64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVG16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVG16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVG32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVG32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMOVG64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CMOVG64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETO8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETO8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETNO8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETNO8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETC8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETC8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETNC8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETNC8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETZ8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETZ8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETNZ8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETNZ8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETBE8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETBE8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETA8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETA8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETS8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETS8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETNS8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETNS8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETP8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETP8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETNP8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETNP8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETL8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETL8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETGE8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETGE8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETLE8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETLE8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gplh_regs) {
	n = fe64_SETG8r_impl(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_SETG8m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : sreg_regs) {
	n = fe64_PUSH_SEG16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : sreg_regs) {
	n = fe64_PUSH_SEGr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : sreg_regs) {
	n = fe64_POP_SEG16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : sreg_regs) {
	n = fe64_POP_SEGr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_CPUID(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BT16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BT16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BT32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BT32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BT64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BT64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHLD16rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHLD16mri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHLD32rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHLD32mri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHLD64rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHLD64mri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHLD16rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHLD16mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHLD32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHLD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHLD64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHLD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
	n = fe64_RSM(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BTS16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BTS16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_BTS16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BTS32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BTS32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_BTS32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BTS64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BTS64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_BTS64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHRD16rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHRD16mri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHRD32rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHRD32mri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHRD64rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHRD64mri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHRD16rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHRD16mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHRD32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHRD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHRD64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHRD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_IMUL16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_IMUL16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_IMUL32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_IMUL32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_IMUL64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_IMUL64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_CMPXCHG8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_CMPXCHG8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_LOCK_CMPXCHG8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMPXCHG16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_CMPXCHG16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_CMPXCHG16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMPXCHG32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_CMPXCHG32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_CMPXCHG32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CMPXCHG64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_CMPXCHG64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_CMPXCHG64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LSS16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LSS32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LSS64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BTR16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BTR16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_BTR16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BTR32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BTR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_BTR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BTR64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BTR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_BTR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LFS16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LFS32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LFS64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LGS16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LGS32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LGS64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_MOVZXr16r8_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVZXr16m8(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_MOVZXr32r8_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVZXr32m8(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_MOVZXr64r8_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVZXr64m8(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVZXr16r16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVZXr16m16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVZXr32r16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVZXr32m16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVZXr64r16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVZXr64m16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_POPCNT16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_POPCNT16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_POPCNT32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_POPCNT32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_POPCNT64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_POPCNT64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_UD1_16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_UD1_16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_UD1_32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_UD1_32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_UD1_64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_UD1_64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BT16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BT16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BT32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BT32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BT64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BT64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BTS16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BTS16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_BTS16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BTS32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BTS32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_BTS32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BTS64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BTS64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_BTS64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BTR16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BTR16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_BTR16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BTR32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BTR32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_BTR32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BTR64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BTR64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_BTR64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BTC16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BTC16ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_BTC16mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BTC32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BTC32ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_BTC32mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_BTC64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
	{
	int8_t op1 = 0;
	n = fe64_BTC64ri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mem) {
	{
	int8_t op1 = 0;
	n = fe64_LOCK_BTC64mi(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BTC16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BTC16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_BTC16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BTC32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BTC32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_BTC32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BTC64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_BTC64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_BTC64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BSF16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BSF16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BSF32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BSF32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BSF64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BSF64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_TZCNT16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_TZCNT16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_TZCNT32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_TZCNT32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_TZCNT64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_TZCNT64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BSR16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BSR16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BSR32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BSR32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BSR64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BSR64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_LZCNT16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LZCNT16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_LZCNT32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LZCNT32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_LZCNT64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_LZCNT64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_MOVSXr16r8_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVSXr16m8(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_MOVSXr32r8_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVSXr32m8(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_MOVSXr64r8_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVSXr64m8(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVSXr16r16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVSXr16m16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVSXr32r16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVSXr32m16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVSXr64r16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVSXr64m16(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gplh_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_XADD8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_XADD8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gplh_regs) {
	n = fe64_LOCK_XADD8mr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_XADD16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_XADD16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_XADD16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_XADD32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_XADD32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_XADD32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_XADD64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_XADD64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_LOCK_XADD64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVNTI32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVNTI64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
	n = fe64_CMPXCHGD32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CMPXCHG8Bm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_CMPXCHGD32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CMPXCHGD64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CMPXCHG16Bm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LOCK_CMPXCHGD64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_BSWAP16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_BSWAP32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_BSWAP64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_UD0_16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_UD0_16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_UD0_32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_UD0_32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_UD0_64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_UD0_64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVBE16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVBE32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVBE64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gplh_regs) {
	n = fe64_CRC32_8rr_impl(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CRC32_8rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVBE16mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVBE32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVBE64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CRC32_16rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CRC32_16rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CRC32_32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CRC32_32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_CRC32_64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_CRC32_64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_CVTPI2PSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_CVTPI2PSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_CVTPI2PDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_CVTPI2PDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_MMX_CVTTPS2PIrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_CVTTPS2PIrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_MMX_CVTTPD2PIrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_CVTTPD2PIrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_MMX_CVTPS2PIrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_CVTPS2PIrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_MMX_CVTPD2PIrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_CVTPD2PIrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PUNPCKLBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PUNPCKLBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PUNPCKLWDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PUNPCKLWDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PUNPCKLDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PUNPCKLDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PACKSSWBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PACKSSWBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PCMPGTBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PCMPGTBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PCMPGTWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PCMPGTWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PCMPGTDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PCMPGTDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PACKUSWBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PACKUSWBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PUNPCKHBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PUNPCKHBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PUNPCKHWDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PUNPCKHWDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PUNPCKHDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PUNPCKHDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PACKSSDWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PACKSSDWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MMX_MOVD_G2Mrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_MOVD_G2Mrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_MMX_MOVQ_G2Mrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_MOVQ_G2Mrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_MOVQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_MOVQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_MMX_PSHUFWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_MMX_PSHUFWrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_MMX_PSRLWri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_MMX_PSRAWri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_MMX_PSLLWri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_MMX_PSRLDri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_MMX_PSRADri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_MMX_PSLLDri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_MMX_PSRLQri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_MMX_PSLLQri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PCMPEQBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PCMPEQBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PCMPEQWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PCMPEQWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PCMPEQDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PCMPEQDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
	n = fe64_MMX_EMMS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_MOVD_M2Grr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_MOVD_M2Gmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_MOVQ_M2Grr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_MOVQ_M2Gmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_MOVQmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_MMX_PINSRWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_MMX_PINSRWrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_MMX_PEXTRWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSRLWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSRLWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSRLDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSRLDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSRLQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSRLQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PADDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PADDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMULLWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMULLWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_MMX_MOVDQ2Qrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_MOVQ2DQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMOVMSKBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSUBUSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSUBUSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSUBUSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSUBUSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMINUBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMINUBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PANDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PANDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PADDUSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PADDUSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PADDUSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PADDUSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMAXUBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMAXUBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PANDNrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PANDNrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PAVGBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PAVGBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSRAWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSRAWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSRADrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSRADrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PAVGWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PAVGWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMULHUWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMULHUWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMULHWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMULHWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_MOVNTQmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSUBSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSUBSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSUBSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSUBSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PORrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PORrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PADDSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PADDSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMINSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMINSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMAXSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMAXSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PADDSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PADDSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PXORrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PXORrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSLLWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSLLWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSLLDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSLLDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSLLQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSLLQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMULUDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMULUDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMADDWDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMADDWDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSADBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSADBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_MASKMOVQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSUBBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSUBBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSUBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSUBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSUBDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSUBDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSUBQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSUBQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PADDBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PADDBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PADDWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PADDWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PADDDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PADDDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSHUFBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSHUFBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PHADDWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PHADDWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PHADDDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PHADDDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PHADDSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PHADDSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMADDUBSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMADDUBSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PHSUBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PHSUBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PHSUBDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PHSUBDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PHSUBSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PHSUBSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSIGNBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSIGNBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSIGNWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSIGNWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PSIGNDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PSIGNDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PMULHRSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PMULHRSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PABSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PABSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PABSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PABSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	n = fe64_MMX_PABSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	n = fe64_MMX_PABSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_MMX_PALIGNRrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_MMX_PALIGNRrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVUPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVUPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVUPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVUPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVSSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVUPSmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVUPDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVSSmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVSDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVLPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVHLPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVLPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVSLDUPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVSLDUPrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVDDUPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVDDUPrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVLPSmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVLPDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_UNPCKLPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_UNPCKLPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_UNPCKLPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_UNPCKLPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_UNPCKHPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_UNPCKHPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_UNPCKHPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_UNPCKHPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVHPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVLHPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVHPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVSHDUPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVSHDUPrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVHPSmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVHPDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVAPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVAPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVAPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVAPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVAPSmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVAPDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SSE_CVTSI2SS32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTSI2SS32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SSE_CVTSI2SS64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTSI2SS64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SSE_CVTSI2SD32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTSI2SD32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SSE_CVTSI2SD64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTSI2SD64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVNTPSmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVNTPDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVNTSSmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVNTSDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTTSS2SI32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTTSS2SI32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTTSS2SI64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTTSS2SI64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTTSD2SI32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTTSD2SI32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTTSD2SI64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTTSD2SI64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTSS2SI32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTSS2SI32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTSS2SI64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTSS2SI64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTSD2SI32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTSD2SI32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTSD2SI64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTSD2SI64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_UCOMISSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_UCOMISSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_UCOMISDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_UCOMISDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_COMISSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_COMISSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_COMISDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_COMISDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVMSKPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVMSKPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_SQRTPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_SQRTPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_SQRTPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_SQRTPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_SQRTSSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_SQRTSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_SQRTSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_SQRTSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_RSQRTPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_RSQRTPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_RSQRTSSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_RSQRTSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_RCPPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_RCPPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_RCPSSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_RCPSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ANDPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ANDPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ANDPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ANDPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ANDNPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ANDNPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ANDNPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ANDNPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ORPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ORPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ORPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ORPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_XORPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_XORPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_XORPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_XORPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ADDPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ADDPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ADDPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ADDPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ADDSSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ADDSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ADDSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ADDSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MULPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MULPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MULPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MULPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MULSSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MULSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MULSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MULSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTPS2PDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTPS2PDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTPD2PSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTPD2PSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTSS2SDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTSS2SDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTSD2SSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTSD2SSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTDQ2PSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTDQ2PSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTPS2DQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTPS2DQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTTPS2DQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTTPS2DQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_SUBPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_SUBPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_SUBPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_SUBPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_SUBSSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_SUBSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_SUBSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_SUBSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MINPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MINPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MINPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MINPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MINSSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MINSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MINSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MINSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_DIVPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_DIVPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_DIVPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_DIVPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_DIVSSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_DIVSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_DIVSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_DIVSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MAXPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MAXPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MAXPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MAXPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MAXSSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MAXSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MAXSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MAXSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PUNPCKLBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PUNPCKLBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PUNPCKLWDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PUNPCKLWDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PUNPCKLDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PUNPCKLDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PACKSSWBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PACKSSWBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PCMPGTBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PCMPGTBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PCMPGTWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PCMPGTWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PCMPGTDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PCMPGTDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PACKUSWBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PACKUSWBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PUNPCKHBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PUNPCKHBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PUNPCKHWDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PUNPCKHWDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PUNPCKHDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PUNPCKHDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PACKSSDWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PACKSSDWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PUNPCKLQDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PUNPCKLQDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PUNPCKHQDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PUNPCKHQDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SSE_MOVD_G2Xrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVD_G2Xrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_SSE_MOVQ_G2Xrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVQ_G2Xrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVDQArr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVDQArm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVDQUrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVDQUrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PSHUFDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PSHUFDrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PSHUFHWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PSHUFHWrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PSHUFLWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PSHUFLWrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SSE_PSRLWri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SSE_PSRAWri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SSE_PSLLWri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SSE_PSRLDri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SSE_PSRADri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SSE_PSLLDri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SSE_PSRLQri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SSE_PSRLDQri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SSE_PSLLQri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
	{
	int8_t op1 = 0;
	n = fe64_SSE_PSLLDQri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PCMPEQBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PCMPEQBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PCMPEQWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PCMPEQWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PCMPEQDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PCMPEQDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
	{
	int16_t op1 = 0;
	n = fe64_SSE_EXTRQri(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int16_t op2 = 0;
	n = fe64_SSE_INSERTQrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_EXTRQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_INSERTQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_HADDPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_HADDPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_HADDPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_HADDPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_HSUBPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_HSUBPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_HSUBPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_HSUBPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVD_X2Grr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVD_X2Gmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVQ_X2Grr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVQ_X2Gmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVDQAmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVDQUmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
	n = fe64_FXSAVE32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FXSAVE64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FXRSTOR32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FXRSTOR64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LDMXCSRm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_STMXCSRm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_LFENCE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_MFENCE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SFENCE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_CMPPSrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_CMPPSrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_CMPPDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_CMPPDrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_CMPSSrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_CMPSSrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_CMPSDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_CMPSDrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PINSRWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PINSRWrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PEXTRWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_SHUFPSrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_SHUFPSrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_SHUFPDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_SHUFPDrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ADDSUBPDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ADDSUBPDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_ADDSUBPSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_ADDSUBPSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSRLWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSRLWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSRLDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSRLDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSRLQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSRLQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PADDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PADDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMULLWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMULLWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVQmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVMSKBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSUBUSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSUBUSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSUBUSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSUBUSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMINUBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMINUBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PANDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PANDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PADDUSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PADDUSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PADDUSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PADDUSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMAXUBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMAXUBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PANDNrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PANDNrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PAVGBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PAVGBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSRAWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSRAWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSRADrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSRADrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PAVGWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PAVGWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMULHUWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMULHUWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMULHWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMULHWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTTPD2DQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTTPD2DQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTDQ2PDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTDQ2PDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_CVTPD2DQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_CVTPD2DQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MOVNTDQmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSUBSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSUBSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSUBSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSUBSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PORrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PORrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PADDSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PADDSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMINSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMINSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMAXSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMAXSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PADDSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PADDSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PXORrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PXORrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_LDDQUrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSLLWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSLLWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSLLDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSLLDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSLLQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSLLQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMULUDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMULUDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMADDWDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMADDWDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSADBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSADBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_MASKMOVDQUrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSUBBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSUBBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSUBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSUBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSUBDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSUBDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSUBQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSUBQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PADDBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PADDBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PADDWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PADDWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PADDDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PADDDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSHUFBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSHUFBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PHADDWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PHADDWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PHADDDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PHADDDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PHADDSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PHADDSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMADDUBSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMADDUBSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PHSUBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PHSUBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PHSUBDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PHSUBDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PHSUBSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PHSUBSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSIGNBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSIGNBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSIGNWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSIGNWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PSIGNDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PSIGNDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMULHRSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMULHRSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PBLENDVBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PBLENDVBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_SSE_BLENDVPSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
for (auto& op2 : xmm_regs) {
	n = fe64_SSE_BLENDVPSrmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_SSE_BLENDVPDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
for (auto& op2 : xmm_regs) {
	n = fe64_SSE_BLENDVPDrmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PTESTrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PTESTrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PABSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PABSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PABSWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PABSWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PABSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PABSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVSXBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVSXBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVSXBDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVSXBDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVSXBQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVSXBQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVSXWDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVSXWDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVSXWQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVSXWQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVSXDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVSXDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMULDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMULDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PCMPEQQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PCMPEQQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_MOVNTDQArm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PACKUSDWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PACKUSDWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVZXBWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVZXBWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVZXBDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVZXBDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVZXBQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVZXBQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVZXWDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVZXWDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVZXWQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVZXWQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMOVZXDQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMOVZXDQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PCMPGTQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PCMPGTQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMINSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMINSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMINSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMINSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMINUWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMINUWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMINUDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMINUDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMAXSBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMAXSBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMAXSDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMAXSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMAXUWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMAXUWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMAXUDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMAXUDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PMULLDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PMULLDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SSE_PHMINPOSUWrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SSE_PHMINPOSUWrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_MOVDIR64Brm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVDIRI32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_MOVDIRI64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_ROUNDPSrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_ROUNDPSrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_ROUNDPDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_ROUNDPDrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_ROUNDSSrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_ROUNDSSrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_ROUNDSDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_ROUNDSDrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_BLENDPSrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_BLENDPSrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_BLENDPDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_BLENDPDrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PBLENDWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PBLENDWrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PALIGNRrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PALIGNRrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PEXTRBmri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PEXTRBrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PEXTRWmri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PEXTRDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PEXTRDmri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PEXTRQrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PEXTRQmri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_EXTRACTPSrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_EXTRACTPSmri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PINSRBrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PINSRBrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_INSERTPSrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_INSERTPSrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PINSRDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PINSRDrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PINSRQrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PINSRQrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_DPPSrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_DPPSrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_DPPDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_DPPDrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_MPSADBWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_MPSADBWrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PCLMULQDQrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PCLMULQDQrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PCMPESTRMrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PCMPESTRMrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PCMPESTRIrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PCMPESTRIrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PCMPISTRMrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PCMPISTRMrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PCMPISTRIrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SSE_PCMPISTRIrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_AESIMCrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_AESIMCrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_AESENCrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_AESENCrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_AESENCLASTrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_AESENCLASTrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_AESDECrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_AESDECrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_AESDECLASTrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_AESDECLASTrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_AESKEYGENASSISTrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_AESKEYGENASSISTrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VAESIMCrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VAESIMCrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VAESENC128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VAESENC128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VAESENC256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VAESENC256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VAESENCLAST128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VAESENCLAST128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VAESENCLAST256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VAESENCLAST256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VAESDEC128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VAESDEC128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VAESDEC256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VAESDEC256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VAESDECLAST128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VAESDECLAST128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VAESDECLAST256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VAESDECLAST256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VAESKEYGENASSISTrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VAESKEYGENASSISTrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVUPS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVUPS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVUPS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVUPS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVUPD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVUPD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVUPD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVUPD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVSSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMOVSSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVSDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMOVSDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVUPS128mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVUPS256mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVUPD128mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVUPD256mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVSSmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVSDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMOVLPSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMOVHLPSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMOVLPDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDDUP128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVDDUP128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDDUP256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVDDUP256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVSLDUP128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVSLDUP128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVSLDUP256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVSLDUP256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVLPSmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVLPDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VUNPCKLPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VUNPCKLPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VUNPCKLPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VUNPCKLPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VUNPCKLPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VUNPCKLPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VUNPCKLPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VUNPCKLPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VUNPCKHPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VUNPCKHPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VUNPCKHPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VUNPCKHPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VUNPCKHPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VUNPCKHPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VUNPCKHPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VUNPCKHPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMOVHPSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMOVLHPSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMOVHPDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVSHDUP128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVSHDUP128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVSHDUP256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVSHDUP256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVHPSmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVHPDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVAPS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVAPS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVAPS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVAPS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVAPD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVAPD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVAPD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVAPD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVAPS128mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVAPS256mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVAPD128mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVAPD256mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_VCVTSI2SS32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VCVTSI2SS32rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_VCVTSI2SS64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VCVTSI2SS64rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_VCVTSI2SD32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VCVTSI2SD32rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_VCVTSI2SD64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VCVTSI2SD64rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVNTPS128mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVNTPS256mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVNTPD128mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVNTPD256mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTTSS2SI32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTTSS2SI32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTTSS2SI64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTTSS2SI64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTTSD2SI32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTTSD2SI32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTTSD2SI64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTTSD2SI64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTSS2SI32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTSS2SI32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTSS2SI64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTSS2SI64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTSD2SI32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTSD2SI32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTSD2SI64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTSD2SI64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VUCOMISSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VUCOMISSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VUCOMISDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VUCOMISDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCOMISSrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCOMISSrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCOMISDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCOMISDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVMSKPS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVMSKPS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVMSKPD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVMSKPD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VSQRTPS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VSQRTPS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VSQRTPS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VSQRTPS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VSQRTPD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VSQRTPD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VSQRTPD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VSQRTPD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VSQRTSSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VSQRTSSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VSQRTSDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VSQRTSDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VRSQRTPS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VRSQRTPS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VRSQRTPS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VRSQRTPS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VRSQRTSSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VRSQRTSSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VRCPPS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VRCPPS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VRCPPS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VRCPPS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VRCPSSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VRCPSSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VANDPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VANDPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VANDPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VANDPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VANDPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VANDPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VANDPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VANDPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VANDNPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VANDNPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VANDNPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VANDNPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VANDNPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VANDNPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VANDNPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VANDNPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VORPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VORPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VORPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VORPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VORPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VORPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VORPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VORPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VXORPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VXORPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VXORPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VXORPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VXORPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VXORPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VXORPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VXORPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VADDPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VADDPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VADDPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VADDPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VADDPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VADDPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VADDPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VADDPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VADDSSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VADDSSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VADDSDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VADDSDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMULPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMULPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMULPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMULPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMULPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMULPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMULPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMULPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMULSSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMULSSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMULSDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMULSDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTPS2PD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTPS2PD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTPS2PD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTPS2PD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTPD2PS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTPD2PS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTPD2PS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTPD2PS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VCVTSS2SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VCVTSS2SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VCVTSD2SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VCVTSD2SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTDQ2PS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTDQ2PS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTDQ2PS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTDQ2PS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTPS2DQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTPS2DQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTPS2DQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTPS2DQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTTPS2DQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTTPS2DQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTTPS2DQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTTPS2DQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VSUBPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VSUBPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VSUBPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VSUBPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VSUBPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VSUBPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VSUBPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VSUBPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VSUBSSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VSUBSSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VSUBSDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VSUBSDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMINPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMINPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMINPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMINPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMINPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMINPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMINPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMINPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMINSSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMINSSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMINSDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMINSDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VDIVPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VDIVPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VDIVPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VDIVPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VDIVPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VDIVPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VDIVPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VDIVPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VDIVSSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VDIVSSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VDIVSDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VDIVSDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMAXPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMAXPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMAXPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMAXPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMAXPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMAXPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMAXPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMAXPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMAXSSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMAXSSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMAXSDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMAXSDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKLBW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKLBW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKLBW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKLBW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKLWD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKLWD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKLWD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKLWD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKLDQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKLDQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKLDQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKLDQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPACKSSWB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPACKSSWB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPACKSSWB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPACKSSWB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPGTB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPGTB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPGTB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPGTB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPGTW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPGTW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPGTW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPGTW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPGTD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPGTD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPGTD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPGTD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPACKUSWB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPACKUSWB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPACKUSWB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPACKUSWB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKHBW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKHBW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKHBW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKHBW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKHWD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKHWD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKHWD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKHWD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKHDQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKHDQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKHDQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKHDQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPACKSSDW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPACKSSDW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPACKSSDW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPACKSSDW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKLQDQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKLQDQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKLQDQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKLQDQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKHQDQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKHQDQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPUNPCKHQDQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPUNPCKHQDQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_VMOVD_G2Xrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_VMOVQ_G2Xrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVQ_G2Xrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDQA128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVDQA128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDQA256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVDQA256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDQU128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVDQU128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDQU256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVDQU256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFD128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFD128rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFD256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFD256rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFHW128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFHW128rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFHW256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFHW256rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFLW128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFLW128rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFLW256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPSHUFLW256rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRLW128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRLW256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRAW128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRAW256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSLLW128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSLLW256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRLD128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRLD256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRAD128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRAD256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSLLD128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSLLD256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRLQ128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRLQ256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRLDQ128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSRLDQ256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSLLQ128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSLLQ256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSLLDQ128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPSLLDQ256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPEQB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPEQB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPEQB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPEQB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPEQW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPEQW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPEQW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPEQW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPEQD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPEQD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPEQD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPEQD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
	n = fe64_VZEROUPPER(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_VZEROALL(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VHADDPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VHADDPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VHADDPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VHADDPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VHADDPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VHADDPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VHADDPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VHADDPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VHSUBPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VHSUBPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VHSUBPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VHSUBPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VHSUBPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VHSUBPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VHSUBPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VHSUBPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVD_X2Grr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVQ_X2Grr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVQ_X2Gmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVQrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVQrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDQA128mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDQA256mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDQU128mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVDQU256mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
	n = fe64_VLDMXCSRm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_VSTMXCSRm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPPS128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPPS128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPPS256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPPS256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPPD128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPPD128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPPD256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPPD256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPSSrrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPSSrrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPSDrrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VCMPSDrrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : gp_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPINSRWrrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPINSRWrrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPEXTRWrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VSHUFPS128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VSHUFPS128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VSHUFPS256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VSHUFPS256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VSHUFPD128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VSHUFPD128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VSHUFPD256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VSHUFPD256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VADDSUBPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VADDSUBPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VADDSUBPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VADDSUBPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VADDSUBPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VADDSUBPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VADDSUBPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VADDSUBPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRLW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRLW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRLW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRLW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRLD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRLD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRLD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRLD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRLQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRLQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRLQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRLQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULLW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULLW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULLW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULLW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVQmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVMSKB128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVMSKB256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBUSB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBUSB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBUSB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBUSB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBUSW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBUSW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBUSW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBUSW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINUB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINUB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINUB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINUB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPAND128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPAND128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPAND256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPAND256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDUSB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDUSB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDUSB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDUSB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDUSW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDUSW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDUSW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDUSW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXUB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXUB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXUB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXUB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPANDN128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPANDN128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPANDN256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPANDN256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPAVGB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPAVGB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPAVGB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPAVGB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRAW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRAW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRAW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRAW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRAD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRAD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRAD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRAD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPAVGW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPAVGW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPAVGW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPAVGW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULHUW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULHUW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULHUW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULHUW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULHW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULHW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULHW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULHW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTTPD2DQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTTPD2DQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTTPD2DQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTTPD2DQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTDQ2PD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTDQ2PD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTDQ2PD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTDQ2PD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTPD2DQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTPD2DQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTPD2DQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTPD2DQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVNTDQ128mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMOVNTDQ256mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBSB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBSB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBSB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBSB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBSW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBSW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBSW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBSW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPOR128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPOR128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPOR256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPOR256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDSB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDSB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDSB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDSB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINSW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINSW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINSW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINSW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDSW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDSW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDSW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDSW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXSW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXSW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXSW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXSW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPXOR128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPXOR128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPXOR256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPXOR256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VLDDQU128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VLDDQU256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSLLW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSLLW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSLLW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSLLW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSLLD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSLLD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSLLD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSLLD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSLLQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSLLQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSLLQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSLLQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULUDQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULUDQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULUDQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULUDQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMADDWD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMADDWD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMADDWD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMADDWD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSADBW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSADBW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSADBW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSADBW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VMASKMOVDQU128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSUBQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSUBQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPADDD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPADDD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSHUFB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSHUFB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSHUFB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSHUFB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHADDW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHADDW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHADDW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHADDW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHADDD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHADDD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHADDD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHADDD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHADDSW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHADDSW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHADDSW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHADDSW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMADDUBSW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMADDUBSW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMADDUBSW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMADDUBSW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHSUBW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHSUBW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHSUBW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHSUBW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHSUBD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHSUBD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHSUBD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHSUBD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHSUBSW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHSUBSW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPHSUBSW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPHSUBSW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSIGNB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSIGNB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSIGNB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSIGNB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSIGNW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSIGNW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSIGNW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSIGNW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSIGND128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSIGND128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSIGND256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSIGND256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULHRSW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULHRSW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULHRSW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULHRSW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPERMILPS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPERMILPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPERMILPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPERMILPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPERMILPD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPERMILPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPERMILPD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPERMILPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VTESTPS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VTESTPS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VTESTPS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VTESTPS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VTESTPD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VTESTPD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VTESTPD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VTESTPD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTPH2PS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTPH2PS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTPH2PS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTPH2PS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPERMPS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPERMPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPTEST128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPTEST128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPTEST256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPTEST256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VBROADCASTSS128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VBROADCASTSS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VBROADCASTSS256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VBROADCASTSS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VBROADCASTSD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VBROADCASTSD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VBROADCASTF128_256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VBROADCASTF128_256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPABSB128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPABSB128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPABSB256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPABSB256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPABSW128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPABSW128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPABSW256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPABSW256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPABSD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPABSD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPABSD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPABSD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXBW128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXBW128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXBW256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXBW256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXBD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXBD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXBD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXBD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXBQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXBQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXBQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXBQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXWD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXWD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXWD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXWD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXWQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXWQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXWQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXWQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXDQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXDQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVSXDQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVSXDQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULDQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULDQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULDQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULDQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPEQQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPEQQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPEQQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPEQQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVNTDQA128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VMOVNTDQA256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPACKUSDW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPACKUSDW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPACKUSDW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPACKUSDW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMASKMOVPS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMASKMOVPS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMASKMOVPD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VMASKMOVPD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMASKMOVPS128mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMASKMOVPS256mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMASKMOVPD128mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VMASKMOVPD256mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXBW128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXBW128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXBW256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXBW256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXBD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXBD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXBD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXBD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXBQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXBQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXBQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXBQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXWD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXWD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXWD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXWD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXWQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXWQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXWQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXWQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXDQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXDQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPMOVZXDQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPMOVZXDQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPERMD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPERMD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPGTQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPGTQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPCMPGTQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPCMPGTQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINSB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINSB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINSB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINSB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINSD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINSD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINSD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINSD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINUW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINUW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINUW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINUW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINUD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINUD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMINUD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMINUD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXSB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXSB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXSB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXSB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXSD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXSD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXSD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXSD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXUW128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXUW128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXUW256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXUW256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXUD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXUD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMAXUD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMAXUD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULLD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULLD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMULLD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMULLD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPHMINPOSUW128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPHMINPOSUW128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRLVD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRLVD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRLVD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRLVD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRLVQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRLVQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRLVQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRLVQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRAVD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRAVD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSRAVD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSRAVD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSLLVD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSLLVD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSLLVD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSLLVD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSLLVQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSLLVQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPSLLVQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPSLLVQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPBROADCASTD128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPBROADCASTD128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPBROADCASTD256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPBROADCASTD256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPBROADCASTQ128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPBROADCASTQ128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPBROADCASTQ256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPBROADCASTQ256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VBROADCASTI128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPBROADCASTB128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPBROADCASTB128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPBROADCASTB256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPBROADCASTB256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPBROADCASTW128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPBROADCASTW128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VPBROADCASTW256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VPBROADCASTW256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMASKMOVD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMASKMOVD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMASKMOVQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMASKMOVQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMASKMOVD128mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMASKMOVD256mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMASKMOVQ128mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMASKMOVQ256mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPGATHERDD128rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPGATHERDD256rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPGATHERDQ128rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPGATHERDQ256rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPGATHERQD128rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPGATHERQD256rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPGATHERQQ128rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPGATHERQQ256rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGATHERDPS128rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGATHERDPS256rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGATHERDPD128rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGATHERDPD256rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGATHERQPS128rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGATHERQPS256rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGATHERQPD128rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : memv) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGATHERQPD256rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB132PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB132PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB132PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB132PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB132PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB132PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB132PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB132PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD132PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD132PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD132PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD132PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD132PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD132PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD132PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD132PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD132PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD132PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD132PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD132PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD132PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD132PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD132PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD132PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD132SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD132SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD132SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD132SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB132PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB132PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB132PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB132PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB132PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB132PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB132PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB132PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB132SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB132SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB132SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB132SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD132PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD132PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD132PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD132PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD132PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD132PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD132PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD132PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD132SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD132SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD132SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD132SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB132PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB132PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB132PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB132PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB132PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB132PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB132PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB132PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB132SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB132SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB132SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB132SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB213PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB213PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB213PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB213PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB213PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB213PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB213PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB213PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD213PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD213PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD213PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD213PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD213PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD213PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD213PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD213PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD213PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD213PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD213PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD213PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD213PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD213PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD213PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD213PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD213SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD213SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD213SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD213SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB213PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB213PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB213PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB213PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB213PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB213PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB213PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB213PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB213SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB213SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB213SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB213SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD213PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD213PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD213PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD213PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD213PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD213PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD213PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD213PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD213SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD213SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD213SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD213SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB213PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB213PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB213PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB213PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB213PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB213PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB213PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB213PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB213SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB213SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB213SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB213SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB231PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB231PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB231PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB231PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB231PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB231PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADDSUB231PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADDSUB231PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD231PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD231PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD231PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD231PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD231PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD231PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUBADD231PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUBADD231PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD231PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD231PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD231PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD231PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD231PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD231PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD231PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD231PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD231SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD231SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMADD231SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMADD231SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB231PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB231PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB231PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB231PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB231PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB231PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB231PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB231PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB231SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB231SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFMSUB231SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFMSUB231SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD231PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD231PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD231PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD231PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD231PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD231PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD231PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD231PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD231SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD231SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMADD231SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMADD231SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB231PS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB231PS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB231PS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB231PS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB231PD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB231PD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB231PD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB231PD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB231SSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB231SSrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VFNMSUB231SDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VFNMSUB231SDrrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMQ256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMQ256rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMPD256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMPD256rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPBLENDD128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPBLENDD128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPBLENDD256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPBLENDD256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMILPS128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMILPS128rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMILPS256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMILPS256rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMILPD128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMILPD128rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMILPD256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPERMILPD256rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPERM2F128_256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPERM2F128_256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VROUNDPS128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VROUNDPS128rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VROUNDPS256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VROUNDPS256rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VROUNDPD128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VROUNDPD128rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VROUNDPD256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VROUNDPD256rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VROUNDSSrrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VROUNDSSrrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VROUNDSDrrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VROUNDSDrrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VBLENDPS128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VBLENDPS128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VBLENDPS256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VBLENDPS256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VBLENDPD128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VBLENDPD128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VBLENDPD256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VBLENDPD256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPBLENDW128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPBLENDW128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPBLENDW256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPBLENDW256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPALIGNR128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPALIGNR128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPALIGNR256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPALIGNR256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPEXTRBmri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPEXTRBrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPEXTRWmri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPEXTRDrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPEXTRDmri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPEXTRQrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPEXTRQmri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VEXTRACTPSrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VEXTRACTPSmri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VINSERTF128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VINSERTF128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VEXTRACTF128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VEXTRACTF128mri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VCVTPS2PH128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VCVTPS2PH128mri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VCVTPS2PH256rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VCVTPS2PH256mri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : gp_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPINSRBrrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPINSRBrrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VINSERTPSrrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VINSERTPSrrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : gp_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPINSRDrrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPINSRDrrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : gp_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPINSRQrrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPINSRQrrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VINSERTI128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VINSERTI128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VEXTRACTI128rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : mem) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VEXTRACTI128mri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VDPPS128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VDPPS128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VDPPS256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VDPPS256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VDPPD128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VDPPD128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VMPSADBW128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VMPSADBW128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VMPSADBW256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VMPSADBW256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPCLMULQDQ128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPCLMULQDQ128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPCLMULQDQ256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPCLMULQDQ256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VPERM2I128_256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VPERM2I128_256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
for (auto& op3 : xmm_regs) {
	n = fe64_VBLENDVPS128rrrr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
for (auto& op3 : xmm_regs) {
	n = fe64_VBLENDVPS128rrmr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
for (auto& op3 : xmm_regs) {
	n = fe64_VBLENDVPS256rrrr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
for (auto& op3 : xmm_regs) {
	n = fe64_VBLENDVPS256rrmr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
for (auto& op3 : xmm_regs) {
	n = fe64_VBLENDVPD128rrrr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
for (auto& op3 : xmm_regs) {
	n = fe64_VBLENDVPD128rrmr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
for (auto& op3 : xmm_regs) {
	n = fe64_VBLENDVPD256rrrr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
for (auto& op3 : xmm_regs) {
	n = fe64_VBLENDVPD256rrmr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
for (auto& op3 : xmm_regs) {
	n = fe64_VPBLENDVB128rrrr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
for (auto& op3 : xmm_regs) {
	n = fe64_VPBLENDVB128rrmr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
for (auto& op3 : xmm_regs) {
	n = fe64_VPBLENDVB256rrrr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
for (auto& op3 : xmm_regs) {
	n = fe64_VPBLENDVB256rrmr(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPCMPESTRMrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPCMPESTRMrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPCMPESTRIrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPCMPESTRIrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPCMPISTRMrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPCMPISTRMrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_VPCMPISTRIrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_VPCMPISTRIrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_ANDN32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : mem) {
	n = fe64_ANDN32rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_ANDN64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : mem) {
	n = fe64_ANDN64rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BLSR32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BLSR32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BLSR64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BLSR64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BLSMSK32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BLSMSK32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BLSMSK64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BLSMSK64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BLSI32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BLSI32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_BLSI64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_BLSI64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_BEXTR32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
for (auto& op2 : gp_regs) {
	n = fe64_BEXTR32rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_BEXTR64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
for (auto& op2 : gp_regs) {
	n = fe64_BEXTR64rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_RORX32rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_RORX32rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	{
	int8_t op2 = 0;
	n = fe64_RORX64rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_RORX64rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_BZHI32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
for (auto& op2 : gp_regs) {
	n = fe64_BZHI32rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_BZHI64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
for (auto& op2 : gp_regs) {
	n = fe64_BZHI64rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_PDEP32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : mem) {
	n = fe64_PDEP32rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_PDEP64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : mem) {
	n = fe64_PDEP64rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_PEXT32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : mem) {
	n = fe64_PEXT32rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_PEXT64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : mem) {
	n = fe64_PEXT64rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_MULX32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : mem) {
	n = fe64_MULX32rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_MULX64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : mem) {
	n = fe64_MULX64rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHLX32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
for (auto& op2 : gp_regs) {
	n = fe64_SHLX32rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHLX64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
for (auto& op2 : gp_regs) {
	n = fe64_SHLX64rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHRX32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
for (auto& op2 : gp_regs) {
	n = fe64_SHRX32rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SHRX64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
for (auto& op2 : gp_regs) {
	n = fe64_SHRX64rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SARX32rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
for (auto& op2 : gp_regs) {
	n = fe64_SARX32rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_SARX64rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
for (auto& op2 : gp_regs) {
	n = fe64_SARX64rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ADCX32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ADCX32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ADCX64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ADCX64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ADOX32rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ADOX32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ADOX64rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ADOX64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
	n = fe64_FADDm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FMULm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FCOMm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FCOMPm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSUBm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSUBRm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FDIVm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FDIVRm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FADDrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FMULrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FCOMrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FCOMPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FSUBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FSUBRrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FDIVrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FDIVRrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
	n = fe64_FLDm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSTm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSTPm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FLDENVm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FLDCWm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSTENVm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSTCWm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FLDr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FXCHr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_FNOP(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FCHS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FABS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FTST(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FXAM(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FLD1(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FLDL2T(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FLDL2E(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FLDPI(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FLDLG2(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FLDLN2(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FLDZ(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_F2XM1(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FYL2X(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FPTAN(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FPATAN(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FXTRACT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FPREM1(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FDECSTP(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FINCSTP(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FPREM(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FYL2XP1(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FSQRT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FSINCOS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FRNDINT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FSCALE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FSIN(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FCOS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
	n = fe64_FIADDm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FIMULm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FICOMm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FICOMPm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISUBm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISUBRm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FIDIVm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FIDIVRm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FCMOVBr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FCMOVEr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FCMOVBEr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FCMOVUr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_FUCOMPP(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
	n = fe64_FILDm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISTTPm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISTm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISTPm32(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FLDm80(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSTPm80(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FCMOVNBr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FCMOVNEr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FCMOVNBEr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FCMOVNUr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_FCLEX(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_FINIT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : st_regs) {
	n = fe64_FUCOMIr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FCOMIr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FADDm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FMULm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FCOMm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FCOMPm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSUBm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSUBRm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FDIVm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FDIVRm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FLDm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISTTPm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSTm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSTPm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FRSTORm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSAVEm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FSTSWm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FFREEr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FSTr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FSTPr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FUCOMr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
	n = fe64_FUCOMPr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FIADDm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FIMULm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FICOMm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FICOMPm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISUBm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISUBRm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FIDIVm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FIDIVRm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FADDPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FMULPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
	n = fe64_FCOMPP(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FSUBRPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FSUBPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FDIVRPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FDIVPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
	n = fe64_FILDm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISTTPm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISTm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISTPm16(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FBLDm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FILDm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FBSTPm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_FISTPm64(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_FSTSWr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FUCOMIPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : st_regs) {
for (auto& op1 : st_regs) {
	n = fe64_FCOMIPrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
	n = fe64_RSTORSSPm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_SETSSBSY(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SAVEPREVSSP(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
	n = fe64_RDSSP32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDSSP64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_ENDBR64(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_ENDBR32(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_WRUSS32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_WRUSS64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_WRSS32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_WRSS64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
	n = fe64_CLRSSBSYm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_INCSSP32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_INCSSP64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CLDEMOTEm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_REP_MONTMUL(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_XSHA1(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_XSHA256(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_XSTORE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_XSTORE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_XCRYPTECB(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_XCRYPTCBC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_XCRYPTCTR(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_XCRYPTCFB(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_REP_XCRYPTOFB(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_INVEPTrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_INVVPIDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
	n = fe64_VMCALL(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
	n = fe64_VMCLEARm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_VMFUNC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_VMLAUNCH(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_VMRESUME(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
	n = fe64_VMPTRLDm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_VMPTRSTm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_VMREADrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_VMREADmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_VMWRITErr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_VMWRITErm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
	n = fe64_VMXOFF(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
	n = fe64_VMXONm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_TDCALL(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SEAMRET(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SEAMOPS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SEAMCALL(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
	n = fe64_CLZERO16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_CLZERO32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_CLZERO64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_RDPRU(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_VMRUN(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_VMMCALL(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_VMGEXIT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_VMLOAD(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_VMSAVE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_STGI(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CLGI(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_SKINIT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_INVLPGA(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_MONITORX(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_MCOMMIT(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_MWAITX(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_INVLPGB(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_TLBSYNC(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RMPQUERY(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RMPREAD(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RMPADJUST(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RMPUPDATE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_PSMASH(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_PVALIDATE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
	n = fe64_TPAUSEr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_UMONITOR32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_UMONITOR64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_UMWAITr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_PTWRITE32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PTWRITE32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_PTWRITE64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_PTWRITE64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_GF2P8MULBrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_GF2P8MULBrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_GF2P8AFFINEQBrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_GF2P8AFFINEQBrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_GF2P8AFFINEINVQBrri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_GF2P8AFFINEINVQBrmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGF2P8MULB128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VGF2P8MULB128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGF2P8MULB256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VGF2P8MULB256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB128rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB128rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB256rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB256rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGF2P8MULB128rrr_mask(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGF2P8MULB128rrr_maskz(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VGF2P8MULB128rrm_mask(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VGF2P8MULB128rrm_maskz(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGF2P8MULB256rrr_mask(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGF2P8MULB256rrr_maskz(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VGF2P8MULB256rrm_mask(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VGF2P8MULB256rrm_maskz(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGF2P8MULB512rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGF2P8MULB512rrr_mask(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VGF2P8MULB512rrr_maskz(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VGF2P8MULB512rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VGF2P8MULB512rrm_mask(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VGF2P8MULB512rrm_maskz(buf, immb, 0, opmask, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB128rrri_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB128rrri_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB128rrmi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB128rrmi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB128rrbi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB128rrbi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB128rrbi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB256rrri_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB256rrri_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB256rrmi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB256rrmi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB256rrbi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB256rrbi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB256rrbi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB512rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB512rrri_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB512rrri_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB512rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB512rrmi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB512rrmi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB512rrbi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB512rrbi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEQB512rrbi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB128rrri_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB128rrri_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB128rrmi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB128rrmi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB128rrbi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB128rrbi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB128rrbi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB256rrri_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB256rrri_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB256rrmi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB256rrmi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB256rrbi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB256rrbi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB256rrbi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB512rrri(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB512rrri_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB512rrri_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB512rrmi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB512rrmi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB512rrmi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB512rrbi(buf, immb, 0, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB512rrbi_mask(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& opmask : mask_regs) {
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	{
	int8_t op3 = 0;
	n = fe64_VGF2P8AFFINEINVQB512rrbi_maskz(buf, immb, 0, opmask, op0, op1, op2, op3);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ENQCMD32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ENQCMD64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ENQCMDS32rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_ENQCMDS64rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
	n = fe64_PCONFIG(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_WBNOINVD(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RDPKRU(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_WRPKRU(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
	n = fe64_RDFSBASE32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDFSBASE64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDGSBASE32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDGSBASE64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_WRFSBASE32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_WRFSBASE64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_WRGSBASE32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_WRGSBASE64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XSAVE32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XSAVE64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XRSTOR32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XRSTOR64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XSAVEOPT32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XSAVEOPT64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CLWBm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CLFLUSHm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_CLFLUSHOPTm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XRSTORS32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XRSTORS64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XSAVEC32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XSAVEC64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XSAVES32m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_XSAVES64m(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDRAND16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDRAND32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDRAND64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDSEED16r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDSEED32r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDSEED64r(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
	n = fe64_RDPIDr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : gp_regs) {
for (auto& op1 : mem) {
	n = fe64_INVPCIDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SHA1NEXTErr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SHA1NEXTErm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SHA1MSG1rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SHA1MSG1rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SHA1MSG2rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SHA1MSG2rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_SHA256RNDS2rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
for (auto& op2 : xmm_regs) {
	n = fe64_SHA256RNDS2rmr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SHA256MSG1rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SHA256MSG1rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_SHA256MSG2rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_SHA256MSG2rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	{
	int8_t op2 = 0;
	n = fe64_SHA1RNDS4rri(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	{
	int8_t op2 = 0;
	n = fe64_SHA1RNDS4rmi(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
}
}
	n = fe64_XSUSLDTRK(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_XRESLDTRK(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBUUD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBUUD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBUUD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBUUD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBUSD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBUSD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBUSD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBUSD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBSUD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBSUD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBSUD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBSUD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBSSD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBSSD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBSSD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBSSD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBUUDS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBUUDS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBUUDS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBUUDS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBUSDS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBUSDS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBUSDS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBUSDS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBSUDS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBSUDS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBSUDS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBSUDS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBSSDS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBSSDS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPBSSDS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPBSSDS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPWSSD128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPWSSD128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPWSSD256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPWSSD256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPWSSDS128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPWSSDS128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPDPWSSDS256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPDPWSSDS256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTNEOPH2PS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTNEOPH2PS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTNEEPH2PS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTNEEPH2PS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTNEEBF162PS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTNEEBF162PS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTNEOBF162PS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTNEOBF162PS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VBCSTNESH2PS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VBCSTNESH2PS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VBCSTNEBF162PS128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VBCSTNEBF162PS256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTNEPS2BF16_128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTNEPS2BF16_128rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_VCVTNEPS2BF16_256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_VCVTNEPS2BF16_256rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMADD52LUQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMADD52LUQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMADD52LUQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMADD52LUQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMADD52HUQ128rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMADD52HUQ128rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : xmm_regs) {
	n = fe64_VPMADD52HUQ256rrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
for (auto& op2 : mem) {
	n = fe64_VPMADD52HUQ256rrm(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
	{
	int8_t op0 = 0;
	n = fe64_HRESETi(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	}
	n = fe64_SERIALIZE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_UIRET(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_TESTUI(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_CLUI(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_STUI(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : gp_regs) {
	n = fe64_SENDUIPIr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_WRMSRNS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_RDMSRLIST(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_WRMSRLIST(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AADD32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AADD64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AAND32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AAND64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AXOR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AXOR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AOR32mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
	n = fe64_AOR64mr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPOXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPOXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNOXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNOXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPBXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPBXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNBXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNBXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPZXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPZXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNZXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNZXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPBEXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPBEXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNBEXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNBEXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPSXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPSXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNSXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNSXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPPXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPPXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNPXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNPXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPLXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPLXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNLXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNLXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPLEXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPLEXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNLEXADD32mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
for (auto& op1 : gp_regs) {
for (auto& op2 : gp_regs) {
	n = fe64_CMPNLEXADD64mrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : mem) {
	n = fe64_AESENCWIDE128KLm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_AESDECWIDE128KLm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_AESENCWIDE256KLm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_AESDECWIDE256KLm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_AESENC128KLrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : xmm_regs) {
	n = fe64_LOADIWKEYrr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_AESDEC128KLrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_AESENC256KLrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : xmm_regs) {
for (auto& op1 : mem) {
	n = fe64_AESDEC256KLrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ENCODEKEY128rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
for (auto& op1 : gp_regs) {
	n = fe64_ENCODEKEY256rr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : gp_regs) {
	n = fe64_LKGSr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_LKGSm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_ERETU(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
	n = fe64_ERETS(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : mem) {
	n = fe64_LDTILECFGm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : mem) {
	n = fe64_STTILECFGm(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
	n = fe64_TILERELEASE(buf, immb, 0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
for (auto& op0 : tmm_regs) {
	n = fe64_TILEZEROr(buf, immb, 0, op0);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
for (auto& op0 : tmm_regs) {
for (auto& op1 : mem) {
	n = fe64_TILELOADDT1rm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : mem) {
for (auto& op1 : tmm_regs) {
	n = fe64_TILESTOREDmr(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : tmm_regs) {
for (auto& op1 : mem) {
	n = fe64_TILELOADDrm(buf, immb, 0, op0, op1);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
for (auto& op0 : tmm_regs) {
for (auto& op1 : tmm_regs) {
for (auto& op2 : tmm_regs) {
	n = fe64_TDPBF16PSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : tmm_regs) {
for (auto& op1 : tmm_regs) {
for (auto& op2 : tmm_regs) {
	n = fe64_TDPFP16PSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : tmm_regs) {
for (auto& op1 : tmm_regs) {
for (auto& op2 : tmm_regs) {
	n = fe64_TDPBUUDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : tmm_regs) {
for (auto& op1 : tmm_regs) {
for (auto& op2 : tmm_regs) {
	n = fe64_TDPBUSDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : tmm_regs) {
for (auto& op1 : tmm_regs) {
for (auto& op2 : tmm_regs) {
	n = fe64_TDPBSUDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : tmm_regs) {
for (auto& op1 : tmm_regs) {
for (auto& op2 : tmm_regs) {
	n = fe64_TDPBSSDrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : tmm_regs) {
for (auto& op1 : tmm_regs) {
for (auto& op2 : tmm_regs) {
	n = fe64_TCMMRLFP16PSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
for (auto& op0 : tmm_regs) {
for (auto& op1 : tmm_regs) {
for (auto& op2 : tmm_regs) {
	n = fe64_TCMMIMFP16PSrrr(buf, immb, 0, op0, op1, op2);
	if (n) cbinsn(buf, immb, n);
	memset(immb, 0, 15);
}
}
}
